import React, { Component } from "react";

class Counter extends Component {
  state = {
    count: 0,
    tags: [],
  };
  styles = {
    fontWeight: 700,
    fontSize: 50,
  };
  renderTags() {
    if (this.state.tags.length === 0)
      return <p>There are no tags to display.</p>;
    return (
      <ol>
        {this.state.tags.map((tag) => (
          <li key={tag}>{tag}</li>
        ))}
      </ol>
    );
  }
  render() {
    return (
      <>
        <div>
          <span style={this.styles} className={this.getBadgeClasses()}>
            {this.functionCounter()}
          </span>
          <button className="btn btn-secondary btn-sm">Increment</button>
          {this.state.tags.length === 0 && "Please create some new tags!!"}
          {this.renderTags()}
        </div>
      </>
    );
  }
  getBadgeClasses() {
    let classes = "badge m-4 badge-";
    classes += this.state.count === 0 ? "warning" : "primary";
    return classes;
  }

  functionCounter() {
    const { count } = this.state;
    return count === 0 ? "Zero" : count;
  }
}

export default Counter;
