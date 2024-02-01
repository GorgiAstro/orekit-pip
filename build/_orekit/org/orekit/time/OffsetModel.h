#ifndef org_orekit_time_OffsetModel_H
#define org_orekit_time_OffsetModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class OffsetModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_5e81a70a44ab7b55,
          mid_init$_d8a7650742cb664b,
          mid_getMJDRef_d6ab429752e7c267,
          mid_getOffset_9981f74b2d109da6,
          mid_getSlope_9981f74b2d109da6,
          mid_getStart_70bc100457881a79,
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
