#ifndef org_orekit_files_ilrs_ILRSHeader_H
#define org_orekit_files_ilrs_ILRSHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class DateComponents;
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
            mid_init$_ff7cb6c242604316,
            mid_getEndEpoch_80e11148db499dda,
            mid_getFormat_d2c8eb4129821f0e,
            mid_getIlrsSatelliteId_d2c8eb4129821f0e,
            mid_getName_d2c8eb4129821f0e,
            mid_getNoradId_d2c8eb4129821f0e,
            mid_getProductionEpoch_70bc100457881a79,
            mid_getProductionHour_d6ab429752e7c267,
            mid_getSequenceNumber_d6ab429752e7c267,
            mid_getSic_d2c8eb4129821f0e,
            mid_getStartEpoch_80e11148db499dda,
            mid_getTargetClass_d6ab429752e7c267,
            mid_getTargetLocation_d6ab429752e7c267,
            mid_getVersion_d6ab429752e7c267,
            mid_setEndEpoch_8497861b879c83f7,
            mid_setFormat_105e1eadb709d9ac,
            mid_setIlrsSatelliteId_105e1eadb709d9ac,
            mid_setName_105e1eadb709d9ac,
            mid_setNoradId_105e1eadb709d9ac,
            mid_setProductionEpoch_badbbe8d1e1c6168,
            mid_setProductionHour_8fd427ab23829bf5,
            mid_setSequenceNumber_8fd427ab23829bf5,
            mid_setSic_105e1eadb709d9ac,
            mid_setStartEpoch_8497861b879c83f7,
            mid_setTargetClass_8fd427ab23829bf5,
            mid_setTargetLocation_8fd427ab23829bf5,
            mid_setVersion_8fd427ab23829bf5,
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
