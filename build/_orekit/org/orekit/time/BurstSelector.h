#ifndef org_orekit_time_BurstSelector_H
#define org_orekit_time_BurstSelector_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class DatesSelector;
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class BurstSelector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_72b6ca23e6675be7,
          mid_selectDates_0499dac7e83b853d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BurstSelector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BurstSelector(const BurstSelector& obj) : ::java::lang::Object(obj) {}

        BurstSelector(jint, jdouble, jdouble, const ::org::orekit::time::TimeScale &);

        ::java::util::List selectDates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(BurstSelector);
      extern PyTypeObject *PY_TYPE(BurstSelector);

      class t_BurstSelector {
      public:
        PyObject_HEAD
        BurstSelector object;
        static PyObject *wrap_Object(const BurstSelector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
