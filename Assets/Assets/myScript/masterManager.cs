using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class masterManager : MonoBehaviour {

    // Use this for initialization
    public int progressValue;



    public Text dialogText;
    public Text debugText;

    public GameObject track;
    public GameObject audioIntro;
    public GameObject audioStart;
    public GameObject audioFinish;
    public GameObject audioEvent;

    public GameObject objIntro;
    public GameObject objStart;
    public GameObject objFinish;

    public string textIntro;
    public string textStart;
    public string textFinish;

    public Transform target;
    public float speed;

    public float period = .01f;

    int prevFrame = -1; 

    Renderer[] currentRenderers;

	void Start () {
        progressValue = 0; //0 to 100

        var currentAudio = audioIntro;

        AudioSource audio = currentAudio.GetComponent<AudioSource>();
        audio.Play();
        //audio.Play(44100);
        dialogText.text = textIntro;
        debugText.text = "go";
        StartCoroutine("DoCheck");	
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
            progressValue++;
            yield return new WaitForSeconds(.2f);
        }
    }

 

	// Update is called once per frame
	void Update () {

        float step = speed * progressValue;
        track.transform.position = Vector3.MoveTowards(track.transform.position, target.position, step);


        if ((progressValue ==1) && (prevFrame !=1))
        {
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
            prevFrame = progressValue;
            dialogText.text = textIntro;

        }

        if ((progressValue == 20)  && (prevFrame != 20))
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
            PlayAudio(audioStart);
            PlayAudio(audioEvent); //add delay before maybe
            dialogText.text = textStart;

        }

            if ((progressValue ==50)  && (prevFrame != 50))// or interval
        {
            Debug.Log("------------------------------------>Something Happens");
            /* event
             * 
                play event audio ance
                hide all go
                show event go

            */

            prevFrame = progressValue;
            dialogText.text = textIntro;

        }

                if ((progressValue == 100) && (prevFrame != 100))
        {
            Debug.Log("------------------------------------>Finish");
            killAudio(audioIntro);
            killAudio(audioStart);
            PlayAudio(audioFinish);
            hideObj(objIntro);
            hideObj(objStart);
            showObj(objFinish);
            prevFrame = progressValue;
            dialogText.text = textFinish;
            /* Finish 
             * 
             * kill all other audio
                play audio finish loop
                show finish sequence once
            */
        }





        float kEraseAccelerationThreshold = 2.0f;

        var accel = Input.acceleration;

        var y = accel.y;

        var length = Mathf.Sqrt(y * y);

        //Debug.Log("length" + length.ToString());

        //debugText.text = length.ToString();
        if (length >= kEraseAccelerationThreshold)
        {

            // DO STUFF HERE


        }

		
	}


    public void OnSubmit()
    {
        debugText.text = "yo yo";
    }



}
