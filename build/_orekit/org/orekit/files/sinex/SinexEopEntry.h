#ifndef org_orekit_files_sinex_SinexEopEntry_H
#define org_orekit_files_sinex_SinexEopEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace frames {
      class EOPEntry;
      class ITRFVersion;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class SinexEopEntry : public ::java::lang::Object {
         public:
          enum {
            mid_init$_02135a6ef25adb4b,
            mid_getDate_c325492395d89b24,
            mid_getLod_b74f83833fdad017,
            mid_getNutLn_b74f83833fdad017,
            mid_getNutOb_b74f83833fdad017,
            mid_getNutX_b74f83833fdad017,
            mid_getNutY_b74f83833fdad017,
            mid_getUt1MinusUtc_b74f83833fdad017,
            mid_getXPo_b74f83833fdad017,
            mid_getYPo_b74f83833fdad017,
            mid_setLod_8ba9fe7a847cecad,
            mid_setNutLn_8ba9fe7a847cecad,
            mid_setNutOb_8ba9fe7a847cecad,
            mid_setNutX_8ba9fe7a847cecad,
            mid_setNutY_8ba9fe7a847cecad,
            mid_setUt1MinusUtc_8ba9fe7a847cecad,
            mid_setxPo_8ba9fe7a847cecad,
            mid_setyPo_8ba9fe7a847cecad,
            mid_toEopEntry_5d6fc5e7d7649a1f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SinexEopEntry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SinexEopEntry(const SinexEopEntry& obj) : ::java::lang::Object(obj) {}

          SinexEopEntry(const ::org::orekit::time::AbsoluteDate &);

          ::org::orekit::time::AbsoluteDate getDate() const;
          jdouble getLod() const;
          jdouble getNutLn() const;
          jdouble getNutOb() const;
          jdouble getNutX() const;
          jdouble getNutY() const;
          jdouble getUt1MinusUtc() const;
          jdouble getXPo() const;
          jdouble getYPo() const;
          void setLod(jdouble) const;
          void setNutLn(jdouble) const;
          void setNutOb(jdouble) const;
          void setNutX(jdouble) const;
          void setNutY(jdouble) const;
          void setUt1MinusUtc(jdouble) const;
          void setxPo(jdouble) const;
          void setyPo(jdouble) const;
          ::org::orekit::frames::EOPEntry toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter &, const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::time::TimeScale &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(SinexEopEntry);
        extern PyTypeObject *PY_TYPE(SinexEopEntry);

        class t_SinexEopEntry {
        public:
          PyObject_HEAD
          SinexEopEntry object;
          static PyObject *wrap_Object(const SinexEopEntry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
