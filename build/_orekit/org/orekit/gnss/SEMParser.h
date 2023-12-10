#ifndef org_orekit_gnss_SEMParser_H
#define org_orekit_gnss_SEMParser_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
    class InputStream;
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
          mid_init$_d0bc48d5b00dc40c,
          mid_init$_4449ecb3aa08e27f,
          mid_getAlmanacs_2afa36052df4765d,
          mid_getPRNNumbers_2afa36052df4765d,
          mid_getSupportedNames_11b109bd155ca898,
          mid_loadData_0fa09c18fee449d5,
          mid_loadData_1815f85c118161ad,
          mid_stillAcceptsData_b108b35ef48e27bd,
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
