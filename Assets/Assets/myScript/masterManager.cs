using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class masterManager : MonoBehaviour {

    // Use this for initialization
    public int progressValue;


    public GameObject controller;

    public Text dialogText;
    public Text debugText;

    public GameObject track;
    public GameObject audioIntro;
    public GameObject audioStart;
    public GameObject audioFinish;
    public GameObject audioEvtStart;
    public GameObject audioEvtFinish;

    public GameObject objIntro;
    public GameObject objStart;
    public GameObject objFinish;

    public string textIntro;
    public string textStart;
    public string textFinish;

    public Transform target;
    public float speed;

    public float period = .01f;

    public int prevFrame = -1;



    Renderer[] currentRenderers;

	void Start () {
        progressValue = 0; //0 to 100

        var currentAudio = audioIntro;


        Vector3 accel;
        Vector3 prevAccel;


        AudioSource audio = currentAudio.GetComponent<AudioSource>();
        audio.Play();
        //audio.Play(44100);
        dialogText.text = textIntro;
        debugText.text = "go";
        StartCoroutine("DoCheck");	

        hideObj(objStart);
        showObj(objIntro);
        hideObj(objFinish);
	}

    void killAudio(GameObject aud ){
        AudioSource audio = aud.GetComponent<AudioSource>();
        audio.Stop();
    }

    void PlayAudio(GameObject aud)
    {
        AudioSource audio = aud.GetComponent<AudioSource>();
        audio.Play();
        audio.Play(44100);
    }

    void showObj(GameObject mc)
    {
        
        currentRenderers = mc.GetComponentsInChildren<Renderer>();
        SetRendererEnabled(true);
    }

    void hideObj(GameObject mc)
    {
        currentRenderers = mc.GetComponentsInChildren<Renderer>();
        SetRendererEnabled(false);
    }


    private void SetRendererEnabled(bool enableRenderer)
    {

        for (int x = 0; x < currentRenderers.Length; x++)
            currentRenderers[x].enabled = enableRenderer;
    }

	
    IEnumerator DoCheck()
    {
        for (; ; )
        {
            // execute block of code here
            //Debug.Log("tick");

             if(progressValue<100){
                if(controller.GetComponent<DebugMiraController>().isClickedflag == true){

                    progressValue++;
                }
            
            }
            yield return new WaitForSeconds(.2f);
        }
    }

 

	// Update is called once per frame
	void Update () {



        var accel = controller.GetComponent<DebugMiraController>().accelDirection;
           

        //float step = speed * progressValue;
        //track.transform.position = Vector3.MoveTowards(track.transform.position, target.position, step);
        track.transform.position = new Vector3(0, 0, (-230 -(progressValue *1.7f))   );


        debugText.text = progressValue.ToString();

        if ((progressValue ==1) && (prevFrame !=1))
        {
            prevFrame = progressValue;
            /* Init 
             * 
             * kill all other audio
                play audio intro loop
                hide all go
                show tutorial go
                play audio tutorial once
            */
            Debug.Log("------------------------------------>Intro");
            hideObj(objStart);
            showObj(objIntro);
            hideObj(objFinish);

            killAudio(audioStart);
            killAudio(audioFinish);
            PlayAudio(audioIntro);
            PlayAudio(audioEvtStart);


            dialogText.text = textIntro;



        }
        if ((progressValue == 3) && (prevFrame != 3))
        {
            dialogText.text = "";
        }
        if ((progressValue == 15) && (prevFrame !=    15))
        {
            dialogText.text = "";
        }
        if ((progressValue == 9)  && (prevFrame != 9))
        {
            /* Start  
             * 
                kill all other audio
                play audio start loop
                hide all go
                show start go
            */
            Debug.Log("------------------------------------>start");

            showObj(objStart);
            hideObj(objFinish);
            //hideObj(objIntro);

            prevFrame = progressValue;
            killAudio(audioIntro);
            killAudio(audioFinish);
          
            PlayAudio(audioEvtStart);
            dialogText.text = textStart;

        }


        if ((progressValue == 11) && (prevFrame != 11))
        {
            /* Start  
             * 
                kill all other audio
                play audio start loop
                hide all go
                show start go
            */

            prevFrame = progressValue;
            PlayAudio(audioStart);


        }

            if ((progressValue ==40)  && (prevFrame != 40))// or interval
        {
            Debug.Log("------------------------------------>Something Happens");
            /* event
             * 
                play event audio ance
                hide all go
                show event go

            */

            prevFrame = progressValue;
            dialogText.text = "Watch Out for the car!!";

        }

        if ((progressValue == 39) && (prevFrame != 39))// or interval
        {
            Debug.Log("------------------------------------>Something Happens");
            /* event
             * 
                play event audio ance
                hide all go
                show event go

            */

            prevFrame = progressValue;
            dialogText.text = "Watch Out for the car!!";

        }
        if ((progressValue == 44) && (prevFrame != 44))// or interval
        {

            prevFrame = progressValue;
            dialogText.text = "";

        }



                if ((progressValue == 99) && (prevFrame != 99))
        {
            Debug.Log("------------------------------------>Finish");
            prevFrame = progressValue;
            killAudio(audioIntro);
            killAudio(audioStart);
            PlayAudio(audioFinish);
            PlayAudio(audioEvtFinish);

            hideObj(objIntro);
            hideObj(objStart);
            showObj(objFinish);

            dialogText.text = textFinish;
            /* Finish 
             * 
             * kill all other audio
                play audio finish loop
                show finish sequence once
            */
        }





        float kEraseAccelerationThreshold = 2.0f;


        var y = accel.y;

        var length = Mathf.Sqrt(y * y);

        //debugText.text = kEraseAccelerationThreshold.ToString();

      
       // debugText.text = controller.GetComponent<DebugMiraController>().isClickedflag.ToString();

		
	}


    public void OnSubmit()

    {
        //debugText.text = controller.isClickedflag;
    }



}
