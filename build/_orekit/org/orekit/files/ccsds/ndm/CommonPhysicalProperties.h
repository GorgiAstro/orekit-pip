#ifndef org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H
#define org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
  }
  namespace hipparchus {
    namespace complex {
      class Quaternion;
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
      namespace ccsds {
        namespace ndm {

          class CommonPhysicalProperties : public ::org::orekit::files::ccsds::section::CommentsContainer {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_getMaxRcs_9981f74b2d109da6,
              mid_getMinRcs_9981f74b2d109da6,
              mid_getOebAreaAlongIntermediate_9981f74b2d109da6,
              mid_getOebAreaAlongMax_9981f74b2d109da6,
              mid_getOebAreaAlongMin_9981f74b2d109da6,
              mid_getOebIntermediate_9981f74b2d109da6,
              mid_getOebMax_9981f74b2d109da6,
              mid_getOebMin_9981f74b2d109da6,
              mid_getOebParentFrame_0fc1562b68204151,
              mid_getOebParentFrameEpoch_80e11148db499dda,
              mid_getOebQ_c78679230082648b,
              mid_getRcs_9981f74b2d109da6,
              mid_getReflectance_9981f74b2d109da6,
              mid_getVmAbsolute_9981f74b2d109da6,
              mid_getVmApparent_9981f74b2d109da6,
              mid_getVmApparentMax_9981f74b2d109da6,
              mid_getVmApparentMin_9981f74b2d109da6,
              mid_setMaxRcs_1ad26e8c8c0cd65b,
              mid_setMinRcs_1ad26e8c8c0cd65b,
              mid_setOebAreaAlongIntermediate_1ad26e8c8c0cd65b,
              mid_setOebAreaAlongMax_1ad26e8c8c0cd65b,
              mid_setOebAreaAlongMin_1ad26e8c8c0cd65b,
              mid_setOebIntermediate_1ad26e8c8c0cd65b,
              mid_setOebMax_1ad26e8c8c0cd65b,
              mid_setOebMin_1ad26e8c8c0cd65b,
              mid_setOebParentFrame_2c8b859a72c0094e,
              mid_setOebParentFrameEpoch_8497861b879c83f7,
              mid_setOebQ_4320462275d66e78,
              mid_setRcs_1ad26e8c8c0cd65b,
              mid_setReflectance_1ad26e8c8c0cd65b,
              mid_setVmAbsolute_1ad26e8c8c0cd65b,
              mid_setVmApparent_1ad26e8c8c0cd65b,
              mid_setVmApparentMax_1ad26e8c8c0cd65b,
              mid_setVmApparentMin_1ad26e8c8c0cd65b,
              mid_validate_1ad26e8c8c0cd65b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonPhysicalProperties(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommonPhysicalProperties(const CommonPhysicalProperties& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

            CommonPhysicalProperties();

            jdouble getMaxRcs() const;
            jdouble getMinRcs() const;
            jdouble getOebAreaAlongIntermediate() const;
            jdouble getOebAreaAlongMax() const;
            jdouble getOebAreaAlongMin() const;
            jdouble getOebIntermediate() const;
            jdouble getOebMax() const;
            jdouble getOebMin() const;
            ::org::orekit::files::ccsds::definitions::FrameFacade getOebParentFrame() const;
            ::org::orekit::time::AbsoluteDate getOebParentFrameEpoch() const;
            ::org::hipparchus::complex::Quaternion getOebQ() const;
            jdouble getRcs() const;
            jdouble getReflectance() const;
            jdouble getVmAbsolute() const;
            jdouble getVmApparent() const;
            jdouble getVmApparentMax() const;
            jdouble getVmApparentMin() const;
            void setMaxRcs(jdouble) const;
            void setMinRcs(jdouble) const;
            void setOebAreaAlongIntermediate(jdouble) const;
            void setOebAreaAlongMax(jdouble) const;
            void setOebAreaAlongMin(jdouble) const;
            void setOebIntermediate(jdouble) const;
            void setOebMax(jdouble) const;
            void setOebMin(jdouble) const;
            void setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
            void setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
            void setOebQ(jint, jdouble) const;
            void setRcs(jdouble) const;
            void setReflectance(jdouble) const;
            void setVmAbsolute(jdouble) const;
            void setVmApparent(jdouble) const;
            void setVmApparentMax(jdouble) const;
            void setVmApparentMin(jdouble) const;
            void validate(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          extern PyType_Def PY_TYPE_DEF(CommonPhysicalProperties);
          extern PyTypeObject *PY_TYPE(CommonPhysicalProperties);

          class t_CommonPhysicalProperties {
          public:
            PyObject_HEAD
            CommonPhysicalProperties object;
            static PyObject *wrap_Object(const CommonPhysicalProperties&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
