#ifndef org_orekit_files_ilrs_ILRSHeader_H
#define org_orekit_files_ilrs_ILRSHeader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class DateComponents;
    }
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
            mid_init$_7ae3461a92a43152,
            mid_getEndEpoch_aaa854c403487cf3,
            mid_getFormat_0090f7797e403f43,
            mid_getIlrsSatelliteId_0090f7797e403f43,
            mid_getName_0090f7797e403f43,
            mid_getNoradId_0090f7797e403f43,
            mid_getProductionEpoch_d592c1a2c355eb35,
            mid_getProductionHour_f2f64475e4580546,
            mid_getSequenceNumber_f2f64475e4580546,
            mid_getSic_0090f7797e403f43,
            mid_getStartEpoch_aaa854c403487cf3,
            mid_getTargetClass_f2f64475e4580546,
            mid_getTargetLocation_f2f64475e4580546,
            mid_getVersion_f2f64475e4580546,
            mid_setEndEpoch_e82d68cd9f886886,
            mid_setFormat_e939c6558ae8d313,
            mid_setIlrsSatelliteId_e939c6558ae8d313,
            mid_setName_e939c6558ae8d313,
            mid_setNoradId_e939c6558ae8d313,
            mid_setProductionEpoch_cd567be04bee4d03,
            mid_setProductionHour_0a2a1ac2721c0336,
            mid_setSequenceNumber_0a2a1ac2721c0336,
            mid_setSic_e939c6558ae8d313,
            mid_setStartEpoch_e82d68cd9f886886,
            mid_setTargetClass_0a2a1ac2721c0336,
            mid_setTargetLocation_0a2a1ac2721c0336,
            mid_setVersion_0a2a1ac2721c0336,
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
