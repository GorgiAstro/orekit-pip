#ifndef org_orekit_utils_OccultationEngine$OccultationAngles_H
#define org_orekit_utils_OccultationEngine$OccultationAngles_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class OccultationEngine$OccultationAngles : public ::java::lang::Object {
       public:
        enum {
          mid_getLimbRadius_456d9a2f64d6b28d,
          mid_getOccultedApparentRadius_456d9a2f64d6b28d,
          mid_getSeparation_456d9a2f64d6b28d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OccultationEngine$OccultationAngles(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OccultationEngine$OccultationAngles(const OccultationEngine$OccultationAngles& obj) : ::java::lang::Object(obj) {}

        jdouble getLimbRadius() const;
        jdouble getOccultedApparentRadius() const;
        jdouble getSeparation() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(OccultationEngine$OccultationAngles);
      extern PyTypeObject *PY_TYPE(OccultationEngine$OccultationAngles);

      class t_OccultationEngine$OccultationAngles {
      public:
        PyObject_HEAD
        OccultationEngine$OccultationAngles object;
        static PyObject *wrap_Object(const OccultationEngine$OccultationAngles&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
