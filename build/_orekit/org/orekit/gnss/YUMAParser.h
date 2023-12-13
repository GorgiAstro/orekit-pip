#ifndef org_orekit_gnss_YUMAParser_H
#define org_orekit_gnss_YUMAParser_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace text {
    class ParseException;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
      class DataProvidersManager;
    }
    namespace time {
      class TimeScales;
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
    namespace errors {
      class OrekitException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class YUMAParser : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_734b91ac30d5f9b4,
          mid_init$_6d628f04453f432c,
          mid_getAlmanacs_e62d3bb06d56d7e3,
          mid_getPRNNumbers_e62d3bb06d56d7e3,
          mid_getSupportedNames_1c1fa1e935d6cdcf,
          mid_loadData_a1fa5dae97ea5ed2,
          mid_loadData_360461e719fb564c,
          mid_stillAcceptsData_9ab94ac1dc23b105,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit YUMAParser(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        YUMAParser(const YUMAParser& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        YUMAParser(const ::java::lang::String &);
        YUMAParser(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScales &);

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
      extern PyType_Def PY_TYPE_DEF(YUMAParser);
      extern PyTypeObject *PY_TYPE(YUMAParser);

      class t_YUMAParser {
      public:
        PyObject_HEAD
        YUMAParser object;
        static PyObject *wrap_Object(const YUMAParser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
