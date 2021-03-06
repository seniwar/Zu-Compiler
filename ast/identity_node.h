// $Id: identity_node.h,v 1.2 2016/03/17 19:30:15 ist179027 Exp $ -*- c++ -*-
#ifndef __ZU_IDENTITY_NODE_H__
#define __ZU_IDENTITY_NODE_H__

#include <cdk/ast/unary_expression_node.h>

namespace zu {

  /**
   * Class for describing the identity ('+') operator
   */
  class identity_node: public cdk::unary_expression_node {
  public:
    inline identity_node(int lineno, cdk::expression_node *arg) :
        cdk::unary_expression_node(lineno, arg) {
    }

    /**
     * @param sp semantic processor visitor
     * @param level syntactic tree level
     */
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_identity_node(this, level);
    }

  };

} // zu

#endif
