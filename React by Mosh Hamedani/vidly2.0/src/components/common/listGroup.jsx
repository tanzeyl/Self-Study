import React from "react";

const ListGroup = (props) => {
  const { item } = props;
  return (
    <ul className="list-group">
      {item.map((item) => (
        <li key={item._id} className="list-group-item">
          {item.name}
        </li>
      ))}
    </ul>
  );
};

export default ListGroup;
