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
      class FieldBodiesElements;
      class BodiesElements;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScales;
      class TimeScale;
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
          mid_init$_59387804c188e4fb,
          mid_init$_cd2232c631ab6063,
          mid_init$_1759522db6aad277,
          mid_init$_edca7e198ed24012,
          mid_evaluateAll_99717f1e804d9d39,
          mid_evaluateAll_1eb2b41141d58bbf,
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
