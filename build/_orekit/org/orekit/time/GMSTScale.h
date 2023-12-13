#ifndef org_orekit_time_GMSTScale_H
#define org_orekit_time_GMSTScale_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class GMSTScale : public ::java::lang::Object {
       public:
        enum {
          mid_getName_1c1fa1e935d6cdcf,
          mid_offsetFromTAI_fd347811007a6ba3,
          mid_offsetFromTAI_140b8964300ddedf,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GMSTScale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GMSTScale(const GMSTScale& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getName() const;
        jdouble offsetFromTAI(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(GMSTScale);
      extern PyTypeObject *PY_TYPE(GMSTScale);

      class t_GMSTScale {
      public:
        PyObject_HEAD
        GMSTScale object;
        static PyObject *wrap_Object(const GMSTScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
