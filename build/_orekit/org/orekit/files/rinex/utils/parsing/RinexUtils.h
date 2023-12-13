#ifndef org_orekit_files_rinex_utils_parsing_RinexUtils_H
#define org_orekit_files_rinex_utils_parsing_RinexUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        class RinexFile;
        namespace section {
          class RinexBaseHeader;
        }
      }
    }
    namespace time {
      class TimeScales;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          namespace parsing {

            class RinexUtils : public ::java::lang::Object {
             public:
              enum {
                mid_convert2DigitsYear_0e7cf35192c3effe,
                mid_getLabel_6f0f3576df9f75ee,
                mid_matchesLabel_e7bf5b93f9300a4f,
                mid_parseComment_f2c374ea04e18089,
                mid_parseDouble_7d79724e4f59c240,
                mid_parseInt_2e817907107bad64,
                mid_parseProgramRunByDate_29ae31375ddb62b3,
                mid_parseString_25c58a005fb431eb,
                mid_parseVersionFileTypeSatelliteSystem_14bfb28ba8b3d689,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RinexUtils(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RinexUtils(const RinexUtils& obj) : ::java::lang::Object(obj) {}

              static jint LABEL_INDEX;

              static jint convert2DigitsYear(jint);
              static ::java::lang::String getLabel(const ::java::lang::String &);
              static jboolean matchesLabel(const ::java::lang::String &, const ::java::lang::String &);
              static void parseComment(jint, const ::java::lang::String &, const ::org::orekit::files::rinex::RinexFile &);
              static jdouble parseDouble(const ::java::lang::String &, jint, jint);
              static jint parseInt(const ::java::lang::String &, jint, jint);
              static void parseProgramRunByDate(const ::java::lang::String &, jint, const ::java::lang::String &, const ::org::orekit::time::TimeScales &, const ::org::orekit::files::rinex::section::RinexBaseHeader &);
              static ::java::lang::String parseString(const ::java::lang::String &, jint, jint);
              static void parseVersionFileTypeSatelliteSystem(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::files::rinex::section::RinexBaseHeader &, const JArray< jdouble > &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          namespace parsing {
            extern PyType_Def PY_TYPE_DEF(RinexUtils);
            extern PyTypeObject *PY_TYPE(RinexUtils);

            class t_RinexUtils {
            public:
              PyObject_HEAD
              RinexUtils object;
              static PyObject *wrap_Object(const RinexUtils&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
