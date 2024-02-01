#ifndef org_orekit_data_PolynomialNutation_H
#define org_orekit_data_PolynomialNutation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PolynomialNutation : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a71c45509eaf92d1,
          mid_derivative_bf28ed64d6e8576b,
          mid_derivative_a3b854adede8eaaa,
          mid_value_bf28ed64d6e8576b,
          mid_value_a3b854adede8eaaa,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PolynomialNutation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PolynomialNutation(const PolynomialNutation& obj) : ::java::lang::Object(obj) {}

        PolynomialNutation(const JArray< jdouble > &);

        jdouble derivative(jdouble) const;
        ::org::hipparchus::CalculusFieldElement derivative(const ::org::hipparchus::CalculusFieldElement &) const;
        jdouble value(jdouble) const;
        ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PolynomialNutation);
      extern PyTypeObject *PY_TYPE(PolynomialNutation);

      class t_PolynomialNutation {
      public:
        PyObject_HEAD
        PolynomialNutation object;
        static PyObject *wrap_Object(const PolynomialNutation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
