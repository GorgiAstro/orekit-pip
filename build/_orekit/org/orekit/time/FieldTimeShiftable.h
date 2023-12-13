#ifndef org_orekit_time_FieldTimeShiftable_H
#define org_orekit_time_FieldTimeShiftable_H

#include "org/orekit/time/TimeShiftable.h"

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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class FieldTimeShiftable : public ::org::orekit::time::TimeShiftable {
       public:
        enum {
          mid_shiftedBy_7996cf2c358d897a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTimeShiftable(jobject obj) : ::org::orekit::time::TimeShiftable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTimeShiftable(const FieldTimeShiftable& obj) : ::org::orekit::time::TimeShiftable(obj) {}

        FieldTimeShiftable shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(FieldTimeShiftable);
      extern PyTypeObject *PY_TYPE(FieldTimeShiftable);

      class t_FieldTimeShiftable {
      public:
        PyObject_HEAD
        FieldTimeShiftable object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_FieldTimeShiftable *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTimeShiftable&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTimeShiftable&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
