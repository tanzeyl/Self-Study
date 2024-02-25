import React from "react";

function Alert(props) {
  return (
    props.alert && (
      <>
        <div
          className={`alert alert-${props.alert.type} alert-dismissible fade show my-2`}
          role="alert"
        >
          {props.alert.msg}
        </div>
      </>
    )
  );
}

export default Alert;
