import React, { Component } from "react";
import Input from "./common/input";

class LoginForm extends Component {
  state = {
    account: { username: "", password: "" },
    errors: {},
  };

  username = React.createRef();

  validate = () => {
    const errors = {};
    const { account } = this.state;
    if (account.username === "") errors.username = "Username is required.";
    if (account.password.trim() === "")
      errors.password = "Password is required.";
    return Object.keys(errors).length === 0 ? null : errors;
  };

  handleSubmit = (e) => {
    e.preventDefault();
    const errors = this.validate();
    this.setState({ errors: errors || {} });
    if (errors) return;
    const username = this.username.current.value;
    console.log("Submitted");
  };

  handleChange = (e) => {
    const errors = { ...this.state.errors };
    const error = this.validateProperty(input);
    if (error) errors[input.name] = error;
    else delete error[input.name];
    const account = { ...this.state.account };
    account[e.currentTarget.name] = e.currentTarget.value;
    this.setState({ account, errors });
  };

  render() {
    return (
      <div>
        <h1>Login</h1>
        <form onSubmit={this.handleSubmit}>
          <Input
            name="username"
            value={this.state.account.username}
            onChange={this.handleChange}
            label="Username"
            error={this.state.errors.username}
          />
          <Input
            name="passowrd"
            value={this.state.account.password}
            onChange={this.handleChange}
            label="Password"
            error={this.state.errors.password}
          />
          <button className="btn btn-primary m-2">Login</button>
        </form>
      </div>
    );
  }
}

export default LoginForm;
