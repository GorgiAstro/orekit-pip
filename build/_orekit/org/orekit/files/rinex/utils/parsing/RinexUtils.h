#ifndef org_orekit_files_rinex_utils_parsing_RinexUtils_H
#define org_orekit_files_rinex_utils_parsing_RinexUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
    }
    namespace files {
      namespace rinex {
        class RinexFile;
        namespace section {
          class RinexBaseHeader;
        }
      }
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
                mid_convert2DigitsYear_0092017e99012694,
                mid_getLabel_60bb1b490b673cbf,
                mid_matchesLabel_64c9e5626fbef1d6,
                mid_parseComment_e76e76329b477742,
                mid_parseDouble_9b73674a2b24fce0,
                mid_parseInt_c5ebe9457f5c54f8,
                mid_parseProgramRunByDate_c3775fbe3016c9f8,
                mid_parseString_5ef851871fdd5040,
                mid_parseVersionFileTypeSatelliteSystem_469c8644f4d64922,
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
