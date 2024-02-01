#ifndef org_orekit_time_FieldTimeStampedPair_H
#define org_orekit_time_FieldTimeStampedPair_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
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

      class FieldTimeStampedPair : public ::java::lang::Object {
       public:
        enum {
          mid_init$_65d93d1f7b00905c,
          mid_init$_bb097c8d86136d24,
          mid_getDate_1fea28374011eef5,
          mid_getFirst_eb7a4124bb25f40f,
          mid_getSecond_eb7a4124bb25f40f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTimeStampedPair(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTimeStampedPair(const FieldTimeStampedPair& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_DATE_EQUALITY_THRESHOLD;

        FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped &, const ::org::orekit::time::FieldTimeStamped &);
        FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped &, const ::org::orekit::time::FieldTimeStamped &, jdouble);

        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::orekit::time::FieldTimeStamped getFirst() const;
        ::org::orekit::time::FieldTimeStamped getSecond() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(FieldTimeStampedPair);
      extern PyTypeObject *PY_TYPE(FieldTimeStampedPair);

      class t_FieldTimeStampedPair {
      public:
        PyObject_HEAD
        FieldTimeStampedPair object;
        PyTypeObject *parameters[3];
        static PyTypeObject **parameters_(t_FieldTimeStampedPair *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTimeStampedPair&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTimeStampedPair&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
