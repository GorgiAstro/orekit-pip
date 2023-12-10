#ifndef org_orekit_time_OffsetModel_H
#define org_orekit_time_OffsetModel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class OffsetModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f258113202d4c30d,
          mid_init$_275d7822ecae0775,
          mid_getMJDRef_f2f64475e4580546,
          mid_getOffset_456d9a2f64d6b28d,
          mid_getSlope_456d9a2f64d6b28d,
          mid_getStart_d592c1a2c355eb35,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OffsetModel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OffsetModel(const OffsetModel& obj) : ::java::lang::Object(obj) {}

        OffsetModel(const ::org::orekit::time::DateComponents &, jint);
        OffsetModel(const ::org::orekit::time::DateComponents &, jint, jdouble, jdouble);

        jint getMJDRef() const;
        jdouble getOffset() const;
        jdouble getSlope() const;
        ::org::orekit::time::DateComponents getStart() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(OffsetModel);
      extern PyTypeObject *PY_TYPE(OffsetModel);

      class t_OffsetModel {
      public:
        PyObject_HEAD
        OffsetModel object;
        static PyObject *wrap_Object(const OffsetModel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
