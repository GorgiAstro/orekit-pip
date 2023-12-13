#ifndef org_orekit_time_BurstSelector_H
#define org_orekit_time_BurstSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DatesSelector;
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class BurstSelector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_cb615059ae60dc02,
          mid_selectDates_50850a0bb1306a34,
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
