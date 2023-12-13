#ifndef org_orekit_time_PythonFieldTimeShiftable_H
#define org_orekit_time_PythonFieldTimeShiftable_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonFieldTimeShiftable : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          mid_shiftedBy_4e5506cad079cc76,
          mid_shiftedBy_7996cf2c358d897a,
          mid_shiftedBy_KK_7996cf2c358d897a,
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
