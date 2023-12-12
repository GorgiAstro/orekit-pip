#ifndef org_orekit_data_FundamentalNutationArguments_H
#define org_orekit_data_FundamentalNutationArguments_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class InputStream;
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class BodiesElements;
      class FieldBodiesElements;
    }
    namespace time {
      class FieldAbsoluteDate;
      class TimeScales;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class FundamentalNutationArguments : public ::java::lang::Object {
       public:
        enum {
          mid_init$_fa2598418e3fde16,
          mid_init$_a1d61436263fee86,
          mid_init$_4bab9f8c6e6f0cd0,
          mid_init$_c10c391be25d3cbe,
          mid_evaluateAll_51d87a2a5d743374,
          mid_evaluateAll_6ac8976527e5e845,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FundamentalNutationArguments(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FundamentalNutationArguments(const FundamentalNutationArguments& obj) : ::java::lang::Object(obj) {}

        FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::TimeScale &, const ::java::util::List &);
        FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::TimeScale &, const ::java::io::InputStream &, const ::java::lang::String &);
        FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::TimeScale &, const ::java::util::List &, const ::org::orekit::time::TimeScales &);
        FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::TimeScale &, const ::java::io::InputStream &, const ::java::lang::String &, const ::org::orekit::time::TimeScales &);

        ::org::orekit::data::BodiesElements evaluateAll(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::data::FieldBodiesElements evaluateAll(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(FundamentalNutationArguments);
      extern PyTypeObject *PY_TYPE(FundamentalNutationArguments);

      class t_FundamentalNutationArguments {
      public:
        PyObject_HEAD
        FundamentalNutationArguments object;
        static PyObject *wrap_Object(const FundamentalNutationArguments&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
