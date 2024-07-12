import React, { useState } from 'react'

export default function GroceryShoppinglist() {
    const [data, setData] = useState('');
    const [list, setList] = useState([]);
    const [editIndex, setEditIndex] = useState(null);

    const handleAdd = () => {
        if (data.trim() !== '') {
            if (editIndex !== null) {
                const newList = [...list];
                newList[editIndex] = data;
                setList(newList);
                setEditIndex(null);
            } else {
                setList([...list, data]);
            }
            setData('');
        }
    };

    const handleDelete = (index) => {
        const newList = [...list];
        newList.splice(index, 1);
        setList(newList);
    };

    const handleEdit = (index) => {
        setData(list[index]);
        setEditIndex(index);
    };

    return (
        <>
        <h2 style={{marginLeft:"460px", fontFamily:"cursive",}}>Grocery App</h2>
        <div className='mygaap'>

            <div>

                <ul>
                    {list.map((item, index) => (
                        <h3  key={index} style={{color:"white"}}>
                            {item}
                            <button
                                onClick={() => handleDelete(index)}
                                style={{ width: '80px', marginLeft: '10px', textAlign: 'center' }}
                            >
                                Delete
                            </button>
                            <button
                                onClick={() => handleEdit(index)}
                                style={{ width: '80px', marginLeft: '10px', textAlign: 'center' }}
                            >
                                Edit
                            </button>
                        </h3>
                    ))}
                </ul>
                {/* <h2>Grocery Shopping</h2> */}
                <input
                    type="text"
                    placeholder='Enter Your Item'
                    value={data}
                    className='ginput'
                    onChange={(e) => setData(e.target.value)}
                />
                <button onClick={handleAdd} className='gbtn'>{editIndex !== null ? 'Update' : 'Add'}</button>

            </div>
        </div>
        </>
    )
}