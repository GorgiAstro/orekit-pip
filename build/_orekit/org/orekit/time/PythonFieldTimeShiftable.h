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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_shiftedBy_58adb9ebab59b800,
          mid_shiftedBy_7813048a5e473cfe,
          mid_shiftedBy_KK_7813048a5e473cfe,
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
