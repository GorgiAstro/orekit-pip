#ifndef org_orekit_time_PythonFieldTimeShiftable_H
#define org_orekit_time_PythonFieldTimeShiftable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeShiftable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonFieldTimeShiftable : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_shiftedBy_bd763dbb5304e362,
          mid_shiftedBy_726000f3d379befb,
          mid_shiftedBy_KK_726000f3d379befb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldTimeShiftable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldTimeShiftable(const PythonFieldTimeShiftable& obj) : ::java::lang::Object(obj) {}

        PythonFieldTimeShiftable();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::orekit::time::FieldTimeShiftable shiftedBy(jdouble) const;
        ::org::orekit::time::FieldTimeShiftable shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::time::FieldTimeShiftable shiftedBy_KK(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonFieldTimeShiftable);
      extern PyTypeObject *PY_TYPE(PythonFieldTimeShiftable);

      class t_PythonFieldTimeShiftable {
      public:
        PyObject_HEAD
        PythonFieldTimeShiftable object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_PythonFieldTimeShiftable *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldTimeShiftable&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldTimeShiftable&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
