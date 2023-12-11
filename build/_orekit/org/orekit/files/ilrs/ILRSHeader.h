#ifndef org_orekit_files_ilrs_ILRSHeader_H
#define org_orekit_files_ilrs_ILRSHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class ILRSHeader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_getEndEpoch_7a97f7e149e79afb,
            mid_getFormat_3cffd47377eca18a,
            mid_getIlrsSatelliteId_3cffd47377eca18a,
            mid_getName_3cffd47377eca18a,
            mid_getNoradId_3cffd47377eca18a,
            mid_getProductionEpoch_ef81839d8717cc3a,
            mid_getProductionHour_412668abc8d889e9,
            mid_getSequenceNumber_412668abc8d889e9,
            mid_getSic_3cffd47377eca18a,
            mid_getStartEpoch_7a97f7e149e79afb,
            mid_getTargetClass_412668abc8d889e9,
            mid_getTargetLocation_412668abc8d889e9,
            mid_getVersion_412668abc8d889e9,
            mid_setEndEpoch_20affcbd28542333,
            mid_setFormat_f5ffdf29129ef90a,
            mid_setIlrsSatelliteId_f5ffdf29129ef90a,
            mid_setName_f5ffdf29129ef90a,
            mid_setNoradId_f5ffdf29129ef90a,
            mid_setProductionEpoch_4d2eb60c6d6ac3df,
            mid_setProductionHour_a3da1a935cb37f7b,
            mid_setSequenceNumber_a3da1a935cb37f7b,
            mid_setSic_f5ffdf29129ef90a,
            mid_setStartEpoch_20affcbd28542333,
            mid_setTargetClass_a3da1a935cb37f7b,
            mid_setTargetLocation_a3da1a935cb37f7b,
            mid_setVersion_a3da1a935cb37f7b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ILRSHeader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ILRSHeader(const ILRSHeader& obj) : ::java::lang::Object(obj) {}

          ILRSHeader();

          ::org::orekit::time::AbsoluteDate getEndEpoch() const;
          ::java::lang::String getFormat() const;
          ::java::lang::String getIlrsSatelliteId() const;
          ::java::lang::String getName() const;
          ::java::lang::String getNoradId() const;
          ::org::orekit::time::DateComponents getProductionEpoch() const;
          jint getProductionHour() const;
          jint getSequenceNumber() const;
          ::java::lang::String getSic() const;
          ::org::orekit::time::AbsoluteDate getStartEpoch() const;
          jint getTargetClass() const;
          jint getTargetLocation() const;
          jint getVersion() const;
          void setEndEpoch(const ::org::orekit::time::AbsoluteDate &) const;
          void setFormat(const ::java::lang::String &) const;
          void setIlrsSatelliteId(const ::java::lang::String &) const;
          void setName(const ::java::lang::String &) const;
          void setNoradId(const ::java::lang::String &) const;
          void setProductionEpoch(const ::org::orekit::time::DateComponents &) const;
          void setProductionHour(jint) const;
          void setSequenceNumber(jint) const;
          void setSic(const ::java::lang::String &) const;
          void setStartEpoch(const ::org::orekit::time::AbsoluteDate &) const;
          void setTargetClass(jint) const;
          void setTargetLocation(jint) const;
          void setVersion(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(ILRSHeader);
        extern PyTypeObject *PY_TYPE(ILRSHeader);

        class t_ILRSHeader {
        public:
          PyObject_HEAD
          ILRSHeader object;
          static PyObject *wrap_Object(const ILRSHeader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
