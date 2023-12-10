#ifndef org_orekit_data_FundamentalNutationArguments_H
#define org_orekit_data_FundamentalNutationArguments_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class TimeScale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace data {
      class BodiesElements;
      class FieldBodiesElements;
    }
    namespace utils {
      class IERSConventions;
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
          mid_init$_84a22072d23326c4,
          mid_init$_f6344200159c44ac,
          mid_init$_83820303330a596d,
          mid_init$_2fb096956bb6d46b,
          mid_evaluateAll_efb9570f1b0522e0,
          mid_evaluateAll_918facbfb636cf26,
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
