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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_shiftedBy_7a32bbb2cfda4cc5,
          mid_shiftedBy_af95a6985c82d852,
          mid_shiftedBy_KK_af95a6985c82d852,
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
