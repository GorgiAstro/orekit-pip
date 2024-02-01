#ifndef org_hipparchus_linear_OrderedComplexEigenDecomposition_H
#define org_hipparchus_linear_OrderedComplexEigenDecomposition_H

#include "org/hipparchus/linear/ComplexEigenDecomposition.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
      class RealMatrix;
    }
    namespace complex {
      class Complex;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class OrderedComplexEigenDecomposition : public ::org::hipparchus::linear::ComplexEigenDecomposition {
       public:
        enum {
          mid_init$_f5364c9a9d9cbd53,
          mid_init$_e834f27fc5021cbd,
          mid_init$_afce1c5c6e44e1cc,
          mid_getVT_02883dbbe5db44ac,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrderedComplexEigenDecomposition(jobject obj) : ::org::hipparchus::linear::ComplexEigenDecomposition(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrderedComplexEigenDecomposition(const OrderedComplexEigenDecomposition& obj) : ::org::hipparchus::linear::ComplexEigenDecomposition(obj) {}

        OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble, jdouble, jdouble);
        OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble, jdouble, jdouble, const ::java::util::Comparator &);

        ::org::hipparchus::linear::FieldMatrix getVT() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(OrderedComplexEigenDecomposition);
      extern PyTypeObject *PY_TYPE(OrderedComplexEigenDecomposition);

      class t_OrderedComplexEigenDecomposition {
      public:
        PyObject_HEAD
        OrderedComplexEigenDecomposition object;
        static PyObject *wrap_Object(const OrderedComplexEigenDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
