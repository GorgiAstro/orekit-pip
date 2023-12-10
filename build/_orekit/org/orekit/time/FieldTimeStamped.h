#ifndef org_orekit_time_FieldTimeStamped_H
#define org_orekit_time_FieldTimeStamped_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
  }
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
    namespace time {

      class FieldTimeStamped : public ::java::lang::Object {
       public:
        enum {
          mid_durationFrom_5b3d47fc55f504bc,
          mid_getDate_51da00d5b8a3b5df,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTimeStamped(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTimeStamped(const FieldTimeStamped& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::CalculusFieldElement durationFrom(const FieldTimeStamped &) const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(FieldTimeStamped);
      extern PyTypeObject *PY_TYPE(FieldTimeStamped);

      class t_FieldTimeStamped {
      public:
        PyObject_HEAD
        FieldTimeStamped object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldTimeStamped *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTimeStamped&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTimeStamped&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
