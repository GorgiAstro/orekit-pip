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
          mid_init$_ff7cb6c242604316,
          mid_add_680e005705d5f0aa,
          mid_filter_b35db77cae58639e,
          mid_findByName_d92ee69c6e397a4a,
          mid_findDelegatingSpanNameBySpanName_95277969d373e11f,
          mid_getDrivers_d751c1a57012b438,
          mid_getNbParams_d6ab429752e7c267,
          mid_getNbValuesToEstimate_d6ab429752e7c267,
          mid_sort_ff7cb6c242604316,
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
