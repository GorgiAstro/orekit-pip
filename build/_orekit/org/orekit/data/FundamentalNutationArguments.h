#ifndef org_orekit_data_FundamentalNutationArguments_H
#define org_orekit_data_FundamentalNutationArguments_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class FieldBodiesElements;
      class BodiesElements;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class FieldAbsoluteDate;
      class TimeScales;
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class FundamentalNutationArguments : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4dca6754391e0716,
          mid_init$_e3a60f0443eea66f,
          mid_init$_eef6cdf2d94d9097,
          mid_init$_9852e659e38b28b8,
          mid_evaluateAll_8263d887c1bcc144,
          mid_evaluateAll_277b5594ce9ed429,
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
