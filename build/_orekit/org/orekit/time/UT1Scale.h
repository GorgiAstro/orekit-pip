#ifndef org_orekit_time_UT1Scale_H
#define org_orekit_time_UT1Scale_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class UTCScale;
      class TimeScale;
    }
    namespace frames {
      class EOPHistory;
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

      class UT1Scale : public ::java::lang::Object {
       public:
        enum {
          mid_getEOPHistory_f9d30be358d43685,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getUTCScale_1e4acbbebd50858e,
          mid_offsetFromTAI_fd347811007a6ba3,
          mid_offsetFromTAI_140b8964300ddedf,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UT1Scale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UT1Scale(const UT1Scale& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::frames::EOPHistory getEOPHistory() const;
        ::java::lang::String getName() const;
        ::org::orekit::time::UTCScale getUTCScale() const;
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
      extern PyType_Def PY_TYPE_DEF(UT1Scale);
      extern PyTypeObject *PY_TYPE(UT1Scale);

      class t_UT1Scale {
      public:
        PyObject_HEAD
        UT1Scale object;
        static PyObject *wrap_Object(const UT1Scale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
