#ifndef org_orekit_files_rinex_utils_parsing_RinexUtils_H
#define org_orekit_files_rinex_utils_parsing_RinexUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {
          class RinexBaseHeader;
        }
        class RinexFile;
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
                mid_convert2DigitsYear_d938fc64e8c6df2d,
                mid_getLabel_95277969d373e11f,
                mid_matchesLabel_15b8a96a7eadea1e,
                mid_parseComment_d2acac15910ec856,
                mid_parseDouble_3bd2e0c85dfb4dd7,
                mid_parseInt_91bb179612eb5bbd,
                mid_parseProgramRunByDate_86211f1690f65d16,
                mid_parseString_421dfd0b28b862cd,
                mid_parseVersionFileTypeSatelliteSystem_9181560cc875b0fe,
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
