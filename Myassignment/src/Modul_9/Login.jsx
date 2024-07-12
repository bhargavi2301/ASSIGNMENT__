import React from 'react'
import "../Modul_9/number.css"
import { useNavigate } from 'react-router-dom'
export default function Login() {
const navigate =useNavigate();
  return (
    <div>
          <div className='mynav'>
            <h3>Navigation</h3>
            <button style={{marginLeft:"1215px"}} className='btn4'onClick={()=>navigate("./login")}>Login</button>
          </div>
          <div className='myfooter'>
         
          </div>
    </div>
  )
}
