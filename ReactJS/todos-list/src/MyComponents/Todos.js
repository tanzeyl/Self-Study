import React from "react";
import { Todo } from "./Todo";

export const Todos = (props) => {
  let myStyle = {
    minHeight: "70vh",
  };
  return (
    <div className="container my-3" style={myStyle}>
      <h3 className="text-center my-3">Todos List</h3>
      {props.todos.length === 0
        ? "No Todos to display"
        : props.todos.map((todo) => {
            return (
              <Todo todo={todo} key={todo.SNo} onDelete={props.onDelete} />
            );
          })}
    </div>
  );
};
