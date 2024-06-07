import React, { useState } from 'react'
import "../Modul_9/number.css"
export default function IncreaseDecrese() {
    const [increse,setIncrese] = useState(0);

    // const [reset,setReset] = useState("");

    const handleIncrese =()=>{
        setIncrese(increse+1)
    }
const handleDecrese = ()=>{
    setIncrese(increse-1)
}
const handleReset = ()=>{
    setIncrese(0)
}
    
  return (
    <div className='background'> 
        <div className='mydiv'>
        <h1 style={{textAlign:"center",color:"white",paddingTop:"50px"}} className='myh1'>{increse}</h1>
        <button onClick={handleIncrese} className='btn1' style={{marginLeft:"490px"}}>increse</button>
        <button onClick={handleDecrese} className='btn1'style={{marginLeft:"80px"}}>decrese</button><br></br>
        <button onClick={handleReset} className='btn1'style={{marginLeft:"590px",marginTop:"30px"}}>reset</button>
        </div>
    </div>
  )
}
