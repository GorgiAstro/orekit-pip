#ifndef org_orekit_gnss_SEMParser_H
#define org_orekit_gnss_SEMParser_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class List;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace text {
    class ParseException;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GPSAlmanac;
          }
        }
      }
    }
    namespace data {
      class DataLoader;
      class DataProvidersManager;
    }
    namespace time {
      class TimeScales;
    }
    namespace errors {
      class OrekitException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class SEMParser : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_f5ffdf29129ef90a,
          mid_init$_f930d4f5e3f73cb2,
          mid_getAlmanacs_0d9551367f7ecdef,
          mid_getPRNNumbers_0d9551367f7ecdef,
          mid_getSupportedNames_3cffd47377eca18a,
          mid_loadData_0640e6acf969ed28,
          mid_loadData_15770e8d8949a557,
          mid_stillAcceptsData_89b302893bdbe1f1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SEMParser(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SEMParser(const SEMParser& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        SEMParser(const ::java::lang::String &);
        SEMParser(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScales &);

        ::java::util::List getAlmanacs() const;
        ::java::util::List getPRNNumbers() const;
        ::java::lang::String getSupportedNames() const;
        void loadData() const;
        void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
        jboolean stillAcceptsData() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(SEMParser);
      extern PyTypeObject *PY_TYPE(SEMParser);

      class t_SEMParser {
      public:
        PyObject_HEAD
        SEMParser object;
        static PyObject *wrap_Object(const SEMParser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
