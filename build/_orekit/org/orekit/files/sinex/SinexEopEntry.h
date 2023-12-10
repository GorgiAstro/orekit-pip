#ifndef org_orekit_files_sinex_SinexEopEntry_H
#define org_orekit_files_sinex_SinexEopEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeScale;
      class AbsoluteDate;
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
            mid_init$_e82d68cd9f886886,
            mid_getDate_aaa854c403487cf3,
            mid_getLod_456d9a2f64d6b28d,
            mid_getNutLn_456d9a2f64d6b28d,
            mid_getNutOb_456d9a2f64d6b28d,
            mid_getNutX_456d9a2f64d6b28d,
            mid_getNutY_456d9a2f64d6b28d,
            mid_getUt1MinusUtc_456d9a2f64d6b28d,
            mid_getXPo_456d9a2f64d6b28d,
            mid_getYPo_456d9a2f64d6b28d,
            mid_setLod_77e0f9a1f260e2e5,
            mid_setNutLn_77e0f9a1f260e2e5,
            mid_setNutOb_77e0f9a1f260e2e5,
            mid_setNutX_77e0f9a1f260e2e5,
            mid_setNutY_77e0f9a1f260e2e5,
            mid_setUt1MinusUtc_77e0f9a1f260e2e5,
            mid_setxPo_77e0f9a1f260e2e5,
            mid_setyPo_77e0f9a1f260e2e5,
            mid_toEopEntry_1b30883cfc3e0010,
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
