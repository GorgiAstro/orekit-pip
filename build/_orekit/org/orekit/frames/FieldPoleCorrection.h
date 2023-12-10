#ifndef org_orekit_frames_FieldPoleCorrection_H
#define org_orekit_frames_FieldPoleCorrection_H

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
  namespace orekit {
    namespace frames {

      class FieldPoleCorrection : public ::java::lang::Object {
       public:
        enum {
          mid_init$_eee0c82b0b9e16e9,
          mid_getXp_eba8e72a22c984ac,
          mid_getYp_eba8e72a22c984ac,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldPoleCorrection(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldPoleCorrection(const FieldPoleCorrection& obj) : ::java::lang::Object(obj) {}

        FieldPoleCorrection(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

        ::org::hipparchus::CalculusFieldElement getXp() const;
        ::org::hipparchus::CalculusFieldElement getYp() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FieldPoleCorrection);
      extern PyTypeObject *PY_TYPE(FieldPoleCorrection);

      class t_FieldPoleCorrection {
      public:
        PyObject_HEAD
        FieldPoleCorrection object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldPoleCorrection *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldPoleCorrection&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldPoleCorrection&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
