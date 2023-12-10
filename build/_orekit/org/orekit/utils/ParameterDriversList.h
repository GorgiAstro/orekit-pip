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
          mid_init$_7ae3461a92a43152,
          mid_add_a4c33e1e91b3ca8e,
          mid_filter_50a2e0b139e80a58,
          mid_findByName_b70a82bb0c9a7331,
          mid_findDelegatingSpanNameBySpanName_43625fc1c3d86afe,
          mid_getDrivers_a6156df500549a58,
          mid_getNbParams_f2f64475e4580546,
          mid_getNbValuesToEstimate_f2f64475e4580546,
          mid_sort_7ae3461a92a43152,
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
