import React, { useState } from 'react';
import "../Modul_9/number.css"
export default function InputList() {
    const [name, setName] = useState("");
    const [result, setResult] = useState([]);

    const handleClick = () => {
        setResult([...result, name]);
        setName(""); // Clear the input field after adding the name
    };

    return (
        <div className='container'>
            <input type='text' placeholder='Enter your name' value={name} onChange={(e) => setName(e.target.value)} className='myinput' />
            <button onClick={handleClick} className='btn1'>Add</button>

            <ul>
                {/* Map over the result array to render each name */}
                {result.map((e, i) => (
                    <li key={i}>{e}</li>
                ))}
            </ul>
        </div>
    );
}
