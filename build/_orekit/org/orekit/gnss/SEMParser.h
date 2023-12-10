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
    namespace time {
      class TimeScales;
    }
    namespace errors {
      class OrekitException;
    }
    namespace data {
      class DataProvidersManager;
      class DataLoader;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GPSAlmanac;
          }
        }
      }
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
          mid_init$_e939c6558ae8d313,
          mid_init$_4573d2669211524d,
          mid_getAlmanacs_a6156df500549a58,
          mid_getPRNNumbers_a6156df500549a58,
          mid_getSupportedNames_0090f7797e403f43,
          mid_loadData_7ae3461a92a43152,
          mid_loadData_ec60cb5f4b3de555,
          mid_stillAcceptsData_e470b6d9e0d979db,
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
