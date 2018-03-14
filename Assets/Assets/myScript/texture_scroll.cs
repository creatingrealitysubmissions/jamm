using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class texture_scroll : MonoBehaviour {

    public float scrollSpeed = 0.1f;
    public Renderer rend;


    void Start()
    {
        rend = GetComponent<Renderer>();
    }


    void Update()
    {
        float offset = Time.time + scrollSpeed;
        rend.material.SetTextureOffset("_MainTex", new Vector2(offset, 0));
 
        var alpha = (Mathf.Sin(Time.time*5 ) * .2f)+.4f;
        var color = gameObject.GetComponent<Renderer>().material.color; 
        var newColor = new Color(color.r, color.g, color.b, alpha); 
        gameObject.GetComponent<Renderer>().material.color = newColor;

    }


 
}