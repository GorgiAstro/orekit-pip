#ifndef org_orekit_utils_ParameterDriversList_H
#define org_orekit_utils_ParameterDriversList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList$DelegatingDriver;
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriversList : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_add_558cfe74a49f563f,
          mid_filter_ed2afdb8506b9742,
          mid_findByName_2cfe42bb060aed43,
          mid_findDelegatingSpanNameBySpanName_60bb1b490b673cbf,
          mid_getDrivers_0d9551367f7ecdef,
          mid_getNbParams_412668abc8d889e9,
          mid_getNbValuesToEstimate_412668abc8d889e9,
          mid_sort_0640e6acf969ed28,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterDriversList(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterDriversList(const ParameterDriversList& obj) : ::java::lang::Object(obj) {}

        ParameterDriversList();

        void add(const ::org::orekit::utils::ParameterDriver &) const;
        void filter(jboolean) const;
        ::org::orekit::utils::ParameterDriversList$DelegatingDriver findByName(const ::java::lang::String &) const;
        ::java::lang::String findDelegatingSpanNameBySpanName(const ::java::lang::String &) const;
        ::java::util::List getDrivers() const;
        jint getNbParams() const;
        jint getNbValuesToEstimate() const;
        void sort() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterDriversList);
      extern PyTypeObject *PY_TYPE(ParameterDriversList);

      class t_ParameterDriversList {
      public:
        PyObject_HEAD
        ParameterDriversList object;
        static PyObject *wrap_Object(const ParameterDriversList&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
