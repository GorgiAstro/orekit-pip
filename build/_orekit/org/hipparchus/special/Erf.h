#ifndef org_hipparchus_special_Erf_H
#define org_hipparchus_special_Erf_H

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
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {

      class Erf : public ::java::lang::Object {
       public:
        enum {
          mid_erf_0ba5fed9597b693e,
          mid_erf_d3398190482814dc,
          mid_erf_824133ce4aec3505,
          mid_erf_75c7ce7d33e7324b,
          mid_erfInv_0ba5fed9597b693e,
          mid_erfInv_d3398190482814dc,
          mid_erfc_0ba5fed9597b693e,
          mid_erfc_d3398190482814dc,
          mid_erfcInv_0ba5fed9597b693e,
          mid_erfcInv_d3398190482814dc,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Erf(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Erf(const Erf& obj) : ::java::lang::Object(obj) {}

        static jdouble erf(jdouble);
        static ::org::hipparchus::CalculusFieldElement erf(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erf(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement erf(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erfInv(jdouble);
        static ::org::hipparchus::CalculusFieldElement erfInv(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erfc(jdouble);
        static ::org::hipparchus::CalculusFieldElement erfc(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erfcInv(jdouble);
        static ::org::hipparchus::CalculusFieldElement erfcInv(const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      extern PyType_Def PY_TYPE_DEF(Erf);
      extern PyTypeObject *PY_TYPE(Erf);

      class t_Erf {
      public:
        PyObject_HEAD
        Erf object;
        static PyObject *wrap_Object(const Erf&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
