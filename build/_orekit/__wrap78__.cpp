#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *EphemerisOcmWriter::class$ = NULL;
              jmethodID *EphemerisOcmWriter::mids$ = NULL;
              bool EphemerisOcmWriter::live$ = false;

              jclass EphemerisOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9e67beef4cd7b138] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_e65e411976c35f1d] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOcmWriter::EphemerisOcmWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a3, const ::org::orekit::files::ccsds::utils::FileFormat & a4, const ::java::lang::String & a5, jdouble a6, jint a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e67beef4cd7b138, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7)) {}

              void EphemerisOcmWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_e65e411976c35f1d], a0.this$, a1.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOcmWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOcmWriter)[] = {
                { Py_tp_methods, t_EphemerisOcmWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOcmWriter, t_EphemerisOcmWriter, EphemerisOcmWriter);

              void t_EphemerisOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOcmWriter), &PY_TYPE_DEF(EphemerisOcmWriter), module, "EphemerisOcmWriter", 0);
              }

              void t_EphemerisOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "class_", make_descriptor(EphemerisOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "wrapfn_", make_descriptor(t_EphemerisOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOcmWriter::wrap_Object(EphemerisOcmWriter(((t_EphemerisOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a3((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a4((jobject) NULL);
                PyTypeObject **p4;
                ::java::lang::String a5((jobject) NULL);
                jdouble a6;
                jint a7;
                EphemerisOcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkkKsDI", ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a5, &a6, &a7))
                {
                  INT_CALL(object = EphemerisOcmWriter(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *ConvertingRuleFactory::class$ = NULL;
          jmethodID *ConvertingRuleFactory::mids$ = NULL;
          bool ConvertingRuleFactory::live$ = false;

          jclass ConvertingRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b58fecf01070c2b0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/gauss/FieldRuleFactory;)V");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConvertingRuleFactory::ConvertingRuleFactory(const ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory & a0) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_b58fecf01070c2b0, a0.this$)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args);
          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data);
          static PyGetSetDef t_ConvertingRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_ConvertingRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConvertingRuleFactory__methods_[] = {
            DECLARE_METHOD(t_ConvertingRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConvertingRuleFactory)[] = {
            { Py_tp_methods, t_ConvertingRuleFactory__methods_ },
            { Py_tp_init, (void *) t_ConvertingRuleFactory_init_ },
            { Py_tp_getset, t_ConvertingRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConvertingRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(ConvertingRuleFactory, t_ConvertingRuleFactory, ConvertingRuleFactory);
          PyObject *t_ConvertingRuleFactory::wrap_Object(const ConvertingRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ConvertingRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ConvertingRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(ConvertingRuleFactory), &PY_TYPE_DEF(ConvertingRuleFactory), module, "ConvertingRuleFactory", 0);
          }

          void t_ConvertingRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "class_", make_descriptor(ConvertingRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "wrapfn_", make_descriptor(t_ConvertingRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConvertingRuleFactory::initializeClass, 1)))
              return NULL;
            return t_ConvertingRuleFactory::wrap_Object(ConvertingRuleFactory(((t_ConvertingRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConvertingRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory a0((jobject) NULL);
            PyTypeObject **p0;
            ConvertingRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::gauss::t_FieldRuleFactory::parameters_))
            {
              INT_CALL(object = ConvertingRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmMetadata::class$ = NULL;
              jmethodID *OcmMetadata::mids$ = NULL;
              bool OcmMetadata::live$ = false;
              jdouble OcmMetadata::DEFAULT_SCLK_OFFSET_AT_EPOCH = (jdouble) 0;
              jdouble OcmMetadata::DEFAULT_SCLK_SEC_PER_SI_SEC = (jdouble) 0;

              jclass OcmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_959fe257032a39c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_3a8941101d7affdc] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getAdmMessageLink_0090f7797e403f43] = env->getMethodID(cls, "getAdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getAlternateNames_a6156df500549a58] = env->getMethodID(cls, "getAlternateNames", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_0090f7797e403f43] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getCdmMessageLink_0090f7797e403f43] = env->getMethodID(cls, "getCdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getCelestialSource_0090f7797e403f43] = env->getMethodID(cls, "getCelestialSource", "()Ljava/lang/String;");
                  mids$[mid_getConstellation_0090f7797e403f43] = env->getMethodID(cls, "getConstellation", "()Ljava/lang/String;");
                  mids$[mid_getCountry_0090f7797e403f43] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
                  mids$[mid_getEopSource_0090f7797e403f43] = env->getMethodID(cls, "getEopSource", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_aaa854c403487cf3] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_0090f7797e403f43] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getInterpMethodEOP_0090f7797e403f43] = env->getMethodID(cls, "getInterpMethodEOP", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_456d9a2f64d6b28d] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getNextMessageEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextMessageID_0090f7797e403f43] = env->getMethodID(cls, "getNextMessageID", "()Ljava/lang/String;");
                  mids$[mid_getObjectDesignator_0090f7797e403f43] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getObjectType_8be2b7ef61e9b842] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_getOcmDataElements_a6156df500549a58] = env->getMethodID(cls, "getOcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getOperator_0090f7797e403f43] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
                  mids$[mid_getOpsStatus_3fd8e869929bb8f2] = env->getMethodID(cls, "getOpsStatus", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_getOrbitCategory_fd22d623233f100a] = env->getMethodID(cls, "getOrbitCategory", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_getOriginatorAddress_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getOwner_0090f7797e403f43] = env->getMethodID(cls, "getOwner", "()Ljava/lang/String;");
                  mids$[mid_getPreviousMessageEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getPreviousMessageID_0090f7797e403f43] = env->getMethodID(cls, "getPreviousMessageID", "()Ljava/lang/String;");
                  mids$[mid_getPrmMessageLink_0090f7797e403f43] = env->getMethodID(cls, "getPrmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getRdmMessageLink_0090f7797e403f43] = env->getMethodID(cls, "getRdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getSclkOffsetAtEpoch_456d9a2f64d6b28d] = env->getMethodID(cls, "getSclkOffsetAtEpoch", "()D");
                  mids$[mid_getSclkSecPerSISec_456d9a2f64d6b28d] = env->getMethodID(cls, "getSclkSecPerSISec", "()D");
                  mids$[mid_getStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_456d9a2f64d6b28d] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_getTdmMessageLink_0090f7797e403f43] = env->getMethodID(cls, "getTdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getTechAddress_0090f7797e403f43] = env->getMethodID(cls, "getTechAddress", "()Ljava/lang/String;");
                  mids$[mid_getTechEmail_0090f7797e403f43] = env->getMethodID(cls, "getTechEmail", "()Ljava/lang/String;");
                  mids$[mid_getTechOrg_0090f7797e403f43] = env->getMethodID(cls, "getTechOrg", "()Ljava/lang/String;");
                  mids$[mid_getTechPOC_0090f7797e403f43] = env->getMethodID(cls, "getTechPOC", "()Ljava/lang/String;");
                  mids$[mid_getTechPhone_0090f7797e403f43] = env->getMethodID(cls, "getTechPhone", "()Ljava/lang/String;");
                  mids$[mid_getTechPosition_0090f7797e403f43] = env->getMethodID(cls, "getTechPosition", "()Ljava/lang/String;");
                  mids$[mid_getTimeSpan_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeSpan", "()D");
                  mids$[mid_getUt1mutcT0_456d9a2f64d6b28d] = env->getMethodID(cls, "getUt1mutcT0", "()D");
                  mids$[mid_setAdmMessageLink_e939c6558ae8d313] = env->getMethodID(cls, "setAdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setAlternateNames_65de9727799c5641] = env->getMethodID(cls, "setAlternateNames", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_e939c6558ae8d313] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setCdmMessageLink_e939c6558ae8d313] = env->getMethodID(cls, "setCdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setCelestialSource_e939c6558ae8d313] = env->getMethodID(cls, "setCelestialSource", "(Ljava/lang/String;)V");
                  mids$[mid_setConstellation_e939c6558ae8d313] = env->getMethodID(cls, "setConstellation", "(Ljava/lang/String;)V");
                  mids$[mid_setCountry_e939c6558ae8d313] = env->getMethodID(cls, "setCountry", "(Ljava/lang/String;)V");
                  mids$[mid_setEopSource_e939c6558ae8d313] = env->getMethodID(cls, "setEopSource", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_e82d68cd9f886886] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_e939c6558ae8d313] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setInterpMethodEOP_e939c6558ae8d313] = env->getMethodID(cls, "setInterpMethodEOP", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setNextMessageEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextMessageID_e939c6558ae8d313] = env->getMethodID(cls, "setNextMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectDesignator_e939c6558ae8d313] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectType_221568b09df5e761] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                  mids$[mid_setOcmDataElements_65de9727799c5641] = env->getMethodID(cls, "setOcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setOperator_e939c6558ae8d313] = env->getMethodID(cls, "setOperator", "(Ljava/lang/String;)V");
                  mids$[mid_setOpsStatus_86966f3fd1c4a467] = env->getMethodID(cls, "setOpsStatus", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;)V");
                  mids$[mid_setOrbitCategory_931113e0e8c63a93] = env->getMethodID(cls, "setOrbitCategory", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;)V");
                  mids$[mid_setOriginatorAddress_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setOwner_e939c6558ae8d313] = env->getMethodID(cls, "setOwner", "(Ljava/lang/String;)V");
                  mids$[mid_setPreviousMessageEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setPreviousMessageID_e939c6558ae8d313] = env->getMethodID(cls, "setPreviousMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setPrmMessageLink_e939c6558ae8d313] = env->getMethodID(cls, "setPrmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setRdmMessageLink_e939c6558ae8d313] = env->getMethodID(cls, "setRdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setSclkOffsetAtEpoch_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSclkOffsetAtEpoch", "(D)V");
                  mids$[mid_setSclkSecPerSISec_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSclkSecPerSISec", "(D)V");
                  mids$[mid_setStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_setTdmMessageLink_e939c6558ae8d313] = env->getMethodID(cls, "setTdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setTechAddress_e939c6558ae8d313] = env->getMethodID(cls, "setTechAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setTechEmail_e939c6558ae8d313] = env->getMethodID(cls, "setTechEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setTechOrg_e939c6558ae8d313] = env->getMethodID(cls, "setTechOrg", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPOC_e939c6558ae8d313] = env->getMethodID(cls, "setTechPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPhone_e939c6558ae8d313] = env->getMethodID(cls, "setTechPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPosition_e939c6558ae8d313] = env->getMethodID(cls, "setTechPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setTimeSpan_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTimeSpan", "(D)V");
                  mids$[mid_setUt1mutcT0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setUt1mutcT0", "(D)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCLK_OFFSET_AT_EPOCH = env->getStaticDoubleField(cls, "DEFAULT_SCLK_OFFSET_AT_EPOCH");
                  DEFAULT_SCLK_SEC_PER_SI_SEC = env->getStaticDoubleField(cls, "DEFAULT_SCLK_SEC_PER_SI_SEC");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmMetadata::OcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_959fe257032a39c0, a0.this$)) {}

              OcmMetadata OcmMetadata::copy(jdouble a0) const
              {
                return OcmMetadata(env->callObjectMethod(this$, mids$[mid_copy_3a8941101d7affdc], a0));
              }

              ::java::lang::String OcmMetadata::getAdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMessageLink_0090f7797e403f43]));
              }

              ::java::util::List OcmMetadata::getAlternateNames() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlternateNames_a6156df500549a58]));
              }

              ::java::lang::String OcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getCdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCdmMessageLink_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getCelestialSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCelestialSource_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getConstellation() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConstellation_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getCountry() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getEopSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEopSource_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_aaa854c403487cf3]));
              }

              ::java::lang::String OcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getInterpMethodEOP() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodEOP_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_aaa854c403487cf3]));
              }

              jdouble OcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String OcmMetadata::getNextMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNextMessageID_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType OcmMetadata::getObjectType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_8be2b7ef61e9b842]));
              }

              ::java::util::List OcmMetadata::getOcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOcmDataElements_a6156df500549a58]));
              }

              ::java::lang::String OcmMetadata::getOperator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus OcmMetadata::getOpsStatus() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus(env->callObjectMethod(this$, mids$[mid_getOpsStatus_3fd8e869929bb8f2]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory OcmMetadata::getOrbitCategory() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory(env->callObjectMethod(this$, mids$[mid_getOrbitCategory_fd22d623233f100a]));
              }

              ::java::lang::String OcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getOwner() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOwner_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getPreviousMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String OcmMetadata::getPreviousMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageID_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getPrmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrmMessageLink_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getRdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRdmMessageLink_0090f7797e403f43]));
              }

              jdouble OcmMetadata::getSclkOffsetAtEpoch() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkOffsetAtEpoch_456d9a2f64d6b28d]);
              }

              jdouble OcmMetadata::getSclkSecPerSISec() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkSecPerSISec_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_aaa854c403487cf3]));
              }

              jdouble OcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_456d9a2f64d6b28d]);
              }

              ::java::lang::String OcmMetadata::getTdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTdmMessageLink_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getTechAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechAddress_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getTechEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechEmail_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getTechOrg() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechOrg_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getTechPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPOC_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getTechPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPhone_0090f7797e403f43]));
              }

              ::java::lang::String OcmMetadata::getTechPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPosition_0090f7797e403f43]));
              }

              jdouble OcmMetadata::getTimeSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSpan_456d9a2f64d6b28d]);
              }

              jdouble OcmMetadata::getUt1mutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getUt1mutcT0_456d9a2f64d6b28d]);
              }

              void OcmMetadata::setAdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAdmMessageLink_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setAlternateNames(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlternateNames_65de9727799c5641], a0.this$);
              }

              void OcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setCdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCdmMessageLink_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setCelestialSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCelestialSource_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setConstellation(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConstellation_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setCountry(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCountry_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setEopSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEopSource_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_e82d68cd9f886886], a0.this$);
              }

              void OcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setInterpMethodEOP(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodEOP_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_e82d68cd9f886886], a0.this$);
              }

              void OcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_77e0f9a1f260e2e5], a0);
              }

              void OcmMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_e82d68cd9f886886], a0.this$);
              }

              void OcmMetadata::setNextMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageID_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectType_221568b09df5e761], a0.this$);
              }

              void OcmMetadata::setOcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOcmDataElements_65de9727799c5641], a0.this$);
              }

              void OcmMetadata::setOperator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOperator_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setOpsStatus(const ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOpsStatus_86966f3fd1c4a467], a0.this$);
              }

              void OcmMetadata::setOrbitCategory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCategory_931113e0e8c63a93], a0.this$);
              }

              void OcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setOwner(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOwner_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_e82d68cd9f886886], a0.this$);
              }

              void OcmMetadata::setPreviousMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageID_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setPrmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrmMessageLink_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setRdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRdmMessageLink_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setSclkOffsetAtEpoch(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkOffsetAtEpoch_77e0f9a1f260e2e5], a0);
              }

              void OcmMetadata::setSclkSecPerSISec(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkSecPerSISec_77e0f9a1f260e2e5], a0);
              }

              void OcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_e82d68cd9f886886], a0.this$);
              }

              void OcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_e82d68cd9f886886], a0.this$);
              }

              void OcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_77e0f9a1f260e2e5], a0);
              }

              void OcmMetadata::setTdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTdmMessageLink_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setTechAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechAddress_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setTechEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechEmail_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setTechOrg(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechOrg_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setTechPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPOC_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setTechPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPhone_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setTechPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPosition_e939c6558ae8d313], a0.this$);
              }

              void OcmMetadata::setTimeSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSpan_77e0f9a1f260e2e5], a0);
              }

              void OcmMetadata::setUt1mutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUt1mutcT0_77e0f9a1f260e2e5], a0);
              }

              void OcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmMetadata_init_(t_OcmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmMetadata_copy(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_getAdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getAlternateNames(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCatalogName(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCelestialSource(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getConstellation(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCountry(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getEopSource(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getEpochT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getInternationalDesignator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getInterpMethodEOP(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextLeapEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextLeapTaimutc(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextMessageEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextMessageID(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getObjectDesignator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getObjectType(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOcmDataElements(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOperator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOpsStatus(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOrbitCategory(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorAddress(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorEmail(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPOC(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPhone(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPosition(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOwner(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPreviousMessageEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPreviousMessageID(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPrmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getRdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getSclkOffsetAtEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getSclkSecPerSISec(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getStartTime(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getStopTime(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTaimutcT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechAddress(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechEmail(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechOrg(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPOC(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPhone(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPosition(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTimeSpan(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getUt1mutcT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_setAdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setAlternateNames(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCatalogName(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCelestialSource(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setConstellation(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCountry(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setEopSource(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setEpochT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setInternationalDesignator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setInterpMethodEOP(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextLeapEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextLeapTaimutc(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextMessageEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextMessageID(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setObjectDesignator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setObjectType(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOcmDataElements(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOperator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOpsStatus(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOrbitCategory(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorAddress(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorEmail(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPOC(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPhone(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPosition(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOwner(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPreviousMessageEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPreviousMessageID(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPrmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setRdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setSclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setSclkSecPerSISec(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setStartTime(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setStopTime(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTaimutcT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechAddress(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechEmail(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechOrg(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPOC(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPhone(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPosition(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTimeSpan(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setUt1mutcT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_validate(t_OcmMetadata *self, PyObject *args);
              static PyObject *t_OcmMetadata_get__admMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__admMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__alternateNames(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__alternateNames(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__catalogName(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__catalogName(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__cdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__cdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__celestialSource(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__celestialSource(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__constellation(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__constellation(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__country(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__country(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__eopSource(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__eopSource(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__epochT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__epochT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__internationalDesignator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__internationalDesignator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__interpMethodEOP(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__interpMethodEOP(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextLeapEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextLeapEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextLeapTaimutc(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextLeapTaimutc(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextMessageEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextMessageID(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextMessageID(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__objectDesignator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__objectDesignator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__objectType(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__objectType(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__ocmDataElements(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__ocmDataElements(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__operator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__operator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__opsStatus(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__opsStatus(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__orbitCategory(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__orbitCategory(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorAddress(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorAddress(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorEmail(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorEmail(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPOC(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPOC(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPhone(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPhone(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPosition(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPosition(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__owner(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__owner(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__previousMessageEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__previousMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__previousMessageID(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__previousMessageID(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__prmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__prmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__rdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__rdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__sclkOffsetAtEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__sclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__sclkSecPerSISec(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__sclkSecPerSISec(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__startTime(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__startTime(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__stopTime(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__stopTime(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__taimutcT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__taimutcT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__tdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__tdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techAddress(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techAddress(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techEmail(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techEmail(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techOrg(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techOrg(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPOC(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPOC(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPhone(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPhone(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPosition(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPosition(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__timeSpan(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__timeSpan(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__ut1mutcT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__ut1mutcT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OcmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OcmMetadata, admMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, alternateNames),
                DECLARE_GETSET_FIELD(t_OcmMetadata, catalogName),
                DECLARE_GETSET_FIELD(t_OcmMetadata, cdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, celestialSource),
                DECLARE_GETSET_FIELD(t_OcmMetadata, constellation),
                DECLARE_GETSET_FIELD(t_OcmMetadata, country),
                DECLARE_GETSET_FIELD(t_OcmMetadata, eopSource),
                DECLARE_GETSET_FIELD(t_OcmMetadata, epochT0),
                DECLARE_GETSET_FIELD(t_OcmMetadata, internationalDesignator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, interpMethodEOP),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextLeapEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextLeapTaimutc),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextMessageEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextMessageID),
                DECLARE_GETSET_FIELD(t_OcmMetadata, objectDesignator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, objectType),
                DECLARE_GETSET_FIELD(t_OcmMetadata, ocmDataElements),
                DECLARE_GETSET_FIELD(t_OcmMetadata, operator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, opsStatus),
                DECLARE_GETSET_FIELD(t_OcmMetadata, orbitCategory),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorAddress),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorEmail),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPOC),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPhone),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPosition),
                DECLARE_GETSET_FIELD(t_OcmMetadata, owner),
                DECLARE_GETSET_FIELD(t_OcmMetadata, previousMessageEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, previousMessageID),
                DECLARE_GETSET_FIELD(t_OcmMetadata, prmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, rdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, sclkOffsetAtEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, sclkSecPerSISec),
                DECLARE_GETSET_FIELD(t_OcmMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OcmMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OcmMetadata, taimutcT0),
                DECLARE_GETSET_FIELD(t_OcmMetadata, tdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techAddress),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techEmail),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techOrg),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPOC),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPhone),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPosition),
                DECLARE_GETSET_FIELD(t_OcmMetadata, timeSpan),
                DECLARE_GETSET_FIELD(t_OcmMetadata, ut1mutcT0),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmMetadata__methods_[] = {
                DECLARE_METHOD(t_OcmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadata, copy, METH_O),
                DECLARE_METHOD(t_OcmMetadata, getAdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getAlternateNames, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCatalogName, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCelestialSource, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getConstellation, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCountry, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getEopSource, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getEpochT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getInternationalDesignator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getInterpMethodEOP, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextLeapEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextLeapTaimutc, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextMessageEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextMessageID, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getObjectDesignator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getObjectType, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOcmDataElements, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOperator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOpsStatus, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOrbitCategory, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorAddress, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorEmail, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPOC, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPhone, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPosition, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOwner, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPreviousMessageEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPreviousMessageID, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPrmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getRdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getSclkOffsetAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getSclkSecPerSISec, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTaimutcT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechAddress, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechEmail, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechOrg, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPOC, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPhone, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPosition, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTimeSpan, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getUt1mutcT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, setAdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setAlternateNames, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCatalogName, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCelestialSource, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setConstellation, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCountry, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setEopSource, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setEpochT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setInternationalDesignator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setInterpMethodEOP, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextLeapEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextLeapTaimutc, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextMessageEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextMessageID, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setObjectDesignator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setObjectType, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOcmDataElements, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOperator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOpsStatus, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOrbitCategory, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorAddress, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorEmail, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPOC, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPhone, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPosition, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOwner, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPreviousMessageEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPreviousMessageID, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPrmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setRdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setSclkOffsetAtEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setSclkSecPerSISec, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTaimutcT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechAddress, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechEmail, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechOrg, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPOC, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPhone, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPosition, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTimeSpan, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setUt1mutcT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmMetadata)[] = {
                { Py_tp_methods, t_OcmMetadata__methods_ },
                { Py_tp_init, (void *) t_OcmMetadata_init_ },
                { Py_tp_getset, t_OcmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmMetadata),
                NULL
              };

              DEFINE_TYPE(OcmMetadata, t_OcmMetadata, OcmMetadata);

              void t_OcmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmMetadata), &PY_TYPE_DEF(OcmMetadata), module, "OcmMetadata", 0);
              }

              void t_OcmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "class_", make_descriptor(OcmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "wrapfn_", make_descriptor(t_OcmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "DEFAULT_SCLK_OFFSET_AT_EPOCH", make_descriptor(OcmMetadata::DEFAULT_SCLK_OFFSET_AT_EPOCH));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "DEFAULT_SCLK_SEC_PER_SI_SEC", make_descriptor(OcmMetadata::DEFAULT_SCLK_SEC_PER_SI_SEC));
              }

              static PyObject *t_OcmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OcmMetadata::wrap_Object(OcmMetadata(((t_OcmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OcmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmMetadata_init_(t_OcmMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                OcmMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = OcmMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmMetadata_copy(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;
                OcmMetadata result((jobject) NULL);

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(result = self->object.copy(a0));
                  return t_OcmMetadata::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "copy", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_getAdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getAlternateNames(t_OcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlternateNames());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OcmMetadata_getCatalogName(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCatalogName());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCelestialSource(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialSource());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getConstellation(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getConstellation());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCountry(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCountry());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getEopSource(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getEopSource());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getEpochT0(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getInternationalDesignator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInternationalDesignator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getInterpMethodEOP(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodEOP());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getNextLeapEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getNextLeapTaimutc(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getNextMessageEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getNextMessageID(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextMessageID());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getObjectDesignator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectDesignator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getObjectType(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOcmDataElements(t_OcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getOcmDataElements());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmElements));
              }

              static PyObject *t_OcmMetadata_getOperator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOperator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOpsStatus(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus result((jobject) NULL);
                OBJ_CALL(result = self->object.getOpsStatus());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOrbitCategory(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCategory());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorAddress(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorAddress());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorEmail(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorEmail());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPOC(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPOC());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPhone(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPhone());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPosition(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPosition());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOwner(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOwner());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getPreviousMessageEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getPreviousMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getPreviousMessageID(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPreviousMessageID());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getPrmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getRdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getRdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getSclkOffsetAtEpoch(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSclkOffsetAtEpoch());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getSclkSecPerSISec(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSclkSecPerSISec());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getStartTime(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getStopTime(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getTaimutcT0(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getTdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechAddress(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechAddress());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechEmail(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechEmail());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechOrg(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechOrg());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPOC(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPOC());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPhone(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPhone());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPosition(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPosition());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTimeSpan(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getUt1mutcT0(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getUt1mutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_setAdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setAlternateNames(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setAlternateNames(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlternateNames", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCatalogName(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCatalogName(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCelestialSource(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCelestialSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCelestialSource", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setConstellation(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setConstellation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConstellation", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCountry(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCountry(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCountry", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setEopSource(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setEopSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEopSource", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setEpochT0(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochT0", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setInternationalDesignator(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInternationalDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInternationalDesignator", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setInterpMethodEOP(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodEOP(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodEOP", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextLeapEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextLeapEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextLeapTaimutc(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNextLeapTaimutc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapTaimutc", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextMessageEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextMessageEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextMessageID(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setNextMessageID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextMessageID", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setObjectDesignator(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setObjectDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setObjectType(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::parameters_))
                {
                  OBJ_CALL(self->object.setObjectType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObjectType", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOcmDataElements(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setOcmDataElements(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOcmDataElements", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOperator(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOperator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOperator", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOpsStatus(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::parameters_))
                {
                  OBJ_CALL(self->object.setOpsStatus(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOpsStatus", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOrbitCategory(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::parameters_))
                {
                  OBJ_CALL(self->object.setOrbitCategory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCategory", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorAddress(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorAddress", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorEmail(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorEmail", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorPOC(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPOC", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorPhone(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPhone", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorPosition(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPosition", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOwner(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOwner(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOwner", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPreviousMessageEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPreviousMessageID(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPreviousMessageID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPreviousMessageID", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPrmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setRdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setRdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setSclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSclkOffsetAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSclkOffsetAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setSclkSecPerSISec(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSclkSecPerSISec(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSclkSecPerSISec", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setStartTime(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setStopTime(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTaimutcT0(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTaimutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTaimutcT0", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechAddress(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechAddress", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechEmail(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechEmail", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechOrg(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechOrg(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechOrg", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPOC(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPOC", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPhone(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPhone", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPosition(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPosition", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTimeSpan(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSpan", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setUt1mutcT0(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setUt1mutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUt1mutcT0", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_validate(t_OcmMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OcmMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OcmMetadata_get__admMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__admMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "admMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__alternateNames(t_OcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlternateNames());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OcmMetadata_set__alternateNames(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAlternateNames(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "alternateNames", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__catalogName(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCatalogName());
                return j2p(value);
              }
              static int t_OcmMetadata_set__catalogName(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCatalogName(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__cdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__cdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__celestialSource(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCelestialSource());
                return j2p(value);
              }
              static int t_OcmMetadata_set__celestialSource(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCelestialSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "celestialSource", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__constellation(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getConstellation());
                return j2p(value);
              }
              static int t_OcmMetadata_set__constellation(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setConstellation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "constellation", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__country(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCountry());
                return j2p(value);
              }
              static int t_OcmMetadata_set__country(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCountry(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "country", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__eopSource(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getEopSource());
                return j2p(value);
              }
              static int t_OcmMetadata_set__eopSource(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setEopSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eopSource", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__epochT0(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__epochT0(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochT0", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__internationalDesignator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInternationalDesignator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__internationalDesignator(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInternationalDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "internationalDesignator", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__interpMethodEOP(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodEOP());
                return j2p(value);
              }
              static int t_OcmMetadata_set__interpMethodEOP(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodEOP(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodEOP", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextLeapEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__nextLeapEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextLeapEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextLeapTaimutc(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__nextLeapTaimutc(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNextLeapTaimutc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapTaimutc", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextMessageEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__nextMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextMessageEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextMessageID(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextMessageID());
                return j2p(value);
              }
              static int t_OcmMetadata_set__nextMessageID(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setNextMessageID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextMessageID", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__objectDesignator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectDesignator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__objectDesignator(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setObjectDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__objectType(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
              }
              static int t_OcmMetadata_set__objectType(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setObjectType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "objectType", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__ocmDataElements(t_OcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getOcmDataElements());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OcmMetadata_set__ocmDataElements(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOcmDataElements(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ocmDataElements", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__operator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOperator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__operator(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOperator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "operator", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__opsStatus(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus value((jobject) NULL);
                OBJ_CALL(value = self->object.getOpsStatus());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::wrap_Object(value);
              }
              static int t_OcmMetadata_set__opsStatus(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOpsStatus(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "opsStatus", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__orbitCategory(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCategory());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::wrap_Object(value);
              }
              static int t_OcmMetadata_set__orbitCategory(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCategory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCategory", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorAddress(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorAddress());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorAddress(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorAddress", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorEmail(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorEmail());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorEmail(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorEmail", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorPOC(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPOC());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPOC(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPOC", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorPhone(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPhone());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPhone(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPhone", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorPosition(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPosition());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPosition(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPosition", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__owner(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOwner());
                return j2p(value);
              }
              static int t_OcmMetadata_set__owner(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOwner(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "owner", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__previousMessageEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getPreviousMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__previousMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setPreviousMessageEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__previousMessageID(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPreviousMessageID());
                return j2p(value);
              }
              static int t_OcmMetadata_set__previousMessageID(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPreviousMessageID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "previousMessageID", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__prmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__prmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__rdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getRdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__rdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setRdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__sclkOffsetAtEpoch(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSclkOffsetAtEpoch());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__sclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSclkOffsetAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sclkOffsetAtEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__sclkSecPerSISec(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSclkSecPerSISec());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__sclkSecPerSISec(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSclkSecPerSISec(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sclkSecPerSISec", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__startTime(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__startTime(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__stopTime(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__stopTime(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__taimutcT0(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__taimutcT0(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTaimutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "taimutcT0", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__tdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__tdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techAddress(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechAddress());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techAddress(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techAddress", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techEmail(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechEmail());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techEmail(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techEmail", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techOrg(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechOrg());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techOrg(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechOrg(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techOrg", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPOC(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPOC());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPOC(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPOC", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPhone(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPhone());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPhone(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPhone", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPosition(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPosition());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPosition(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPosition", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__timeSpan(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__timeSpan(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSpan", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__ut1mutcT0(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getUt1mutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__ut1mutcT0(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setUt1mutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ut1mutcT0", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/LaguerreSolver.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *LaguerreSolver::class$ = NULL;
        jmethodID *LaguerreSolver::mids$ = NULL;
        bool LaguerreSolver::live$ = false;

        jclass LaguerreSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/LaguerreSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_solveAllComplex_d2645552bb1aff58] = env->getMethodID(cls, "solveAllComplex", "([DD)[Lorg/hipparchus/complex/Complex;");
            mids$[mid_solveComplex_68a904a4b68e072c] = env->getMethodID(cls, "solveComplex", "([DD)Lorg/hipparchus/complex/Complex;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaguerreSolver::LaguerreSolver() : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble LaguerreSolver::doSolve() const
        {
          return env->callDoubleMethod(this$, mids$[mid_doSolve_456d9a2f64d6b28d]);
        }

        JArray< ::org::hipparchus::complex::Complex > LaguerreSolver::solveAllComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_solveAllComplex_d2645552bb1aff58], a0.this$, a1));
        }

        ::org::hipparchus::complex::Complex LaguerreSolver::solveComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_solveComplex_68a904a4b68e072c], a0.this$, a1));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args);
        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self);
        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data);
        static PyGetSetDef t_LaguerreSolver__fields_[] = {
          DECLARE_GET_FIELD(t_LaguerreSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaguerreSolver__methods_[] = {
          DECLARE_METHOD(t_LaguerreSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, doSolve, METH_NOARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveAllComplex, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveComplex, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaguerreSolver)[] = {
          { Py_tp_methods, t_LaguerreSolver__methods_ },
          { Py_tp_init, (void *) t_LaguerreSolver_init_ },
          { Py_tp_getset, t_LaguerreSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaguerreSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractPolynomialSolver),
          NULL
        };

        DEFINE_TYPE(LaguerreSolver, t_LaguerreSolver, LaguerreSolver);
        PyObject *t_LaguerreSolver::wrap_Object(const LaguerreSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LaguerreSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LaguerreSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(LaguerreSolver), &PY_TYPE_DEF(LaguerreSolver), module, "LaguerreSolver", 0);
        }

        void t_LaguerreSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "class_", make_descriptor(LaguerreSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "wrapfn_", make_descriptor(t_LaguerreSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaguerreSolver::initializeClass, 1)))
            return NULL;
          return t_LaguerreSolver::wrap_Object(LaguerreSolver(((t_LaguerreSolver *) arg)->object.this$));
        }
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaguerreSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LaguerreSolver object((jobject) NULL);

              INT_CALL(object = LaguerreSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LaguerreSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LaguerreSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LaguerreSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.doSolve());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveAllComplex(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "solveAllComplex", args);
          return NULL;
        }

        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::complex::Complex result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveComplex(a0, a1));
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveComplex", args);
          return NULL;
        }
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TypeSvMessage::class$ = NULL;
          jmethodID *TypeSvMessage::mids$ = NULL;
          bool TypeSvMessage::live$ = false;

          jclass TypeSvMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TypeSvMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationMessageType_0090f7797e403f43] = env->getMethodID(cls, "getNavigationMessageType", "()Ljava/lang/String;");
              mids$[mid_getPrn_f2f64475e4580546] = env->getMethodID(cls, "getPrn", "()I");
              mids$[mid_getSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String TypeSvMessage::getNavigationMessageType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNavigationMessageType_0090f7797e403f43]));
          }

          jint TypeSvMessage::getPrn() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrn_f2f64475e4580546]);
          }

          ::org::orekit::gnss::SatelliteSystem TypeSvMessage::getSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_1b72fcc8f550bfc7]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data);
          static PyGetSetDef t_TypeSvMessage__fields_[] = {
            DECLARE_GET_FIELD(t_TypeSvMessage, navigationMessageType),
            DECLARE_GET_FIELD(t_TypeSvMessage, prn),
            DECLARE_GET_FIELD(t_TypeSvMessage, system),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TypeSvMessage__methods_[] = {
            DECLARE_METHOD(t_TypeSvMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, getNavigationMessageType, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getPrn, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TypeSvMessage)[] = {
            { Py_tp_methods, t_TypeSvMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TypeSvMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TypeSvMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TypeSvMessage, t_TypeSvMessage, TypeSvMessage);

          void t_TypeSvMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(TypeSvMessage), &PY_TYPE_DEF(TypeSvMessage), module, "TypeSvMessage", 0);
          }

          void t_TypeSvMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "class_", make_descriptor(TypeSvMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "wrapfn_", make_descriptor(t_TypeSvMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TypeSvMessage::initializeClass, 1)))
              return NULL;
            return t_TypeSvMessage::wrap_Object(TypeSvMessage(((t_TypeSvMessage *) arg)->object.this$));
          }
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TypeSvMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationMessageType());
            return j2p(result);
          }

          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationMessageType());
            return j2p(value);
          }

          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser$Unit::class$ = NULL;
      jmethodID *PolynomialParser$Unit::mids$ = NULL;
      bool PolynomialParser$Unit::live$ = false;
      PolynomialParser$Unit *PolynomialParser$Unit::ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::DEGREES = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MICRO_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MILLI_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::NO_UNITS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::RADIANS = NULL;

      jclass PolynomialParser$Unit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser$Unit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toSI_0ba5fed9597b693e] = env->getMethodID(cls, "toSI", "(D)D");
          mids$[mid_valueOf_7f211ac3aaca41bc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/data/PolynomialParser$Unit;");
          mids$[mid_values_aebd4a324c307ed5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/data/PolynomialParser$Unit;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          DEGREES = new PolynomialParser$Unit(env->getStaticObjectField(cls, "DEGREES", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MICRO_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MICRO_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MILLI_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          NO_UNITS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "NO_UNITS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          RADIANS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "RADIANS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble PolynomialParser$Unit::toSI(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_toSI_0ba5fed9597b693e], a0);
      }

      PolynomialParser$Unit PolynomialParser$Unit::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialParser$Unit(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7f211ac3aaca41bc], a0.this$));
      }

      JArray< PolynomialParser$Unit > PolynomialParser$Unit::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PolynomialParser$Unit >(env->callStaticObjectMethod(cls, mids$[mid_values_aebd4a324c307ed5]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type);
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data);
      static PyGetSetDef t_PolynomialParser$Unit__fields_[] = {
        DECLARE_GET_FIELD(t_PolynomialParser$Unit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PolynomialParser$Unit__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser$Unit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, of_, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialParser$Unit, toSI, METH_O),
        DECLARE_METHOD(t_PolynomialParser$Unit, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser$Unit)[] = {
        { Py_tp_methods, t_PolynomialParser$Unit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PolynomialParser$Unit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser$Unit)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PolynomialParser$Unit, t_PolynomialParser$Unit, PolynomialParser$Unit);
      PyObject *t_PolynomialParser$Unit::wrap_Object(const PolynomialParser$Unit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PolynomialParser$Unit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PolynomialParser$Unit::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser$Unit), &PY_TYPE_DEF(PolynomialParser$Unit), module, "PolynomialParser$Unit", 0);
      }

      void t_PolynomialParser$Unit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "class_", make_descriptor(PolynomialParser$Unit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "wrapfn_", make_descriptor(t_PolynomialParser$Unit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "boxfn_", make_descriptor(boxObject));
        env->getClass(PolynomialParser$Unit::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "DEGREES", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::DEGREES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MICRO_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MICRO_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MILLI_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MILLI_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "NO_UNITS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::NO_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "RADIANS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::RADIANS)));
      }

      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser$Unit::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser$Unit::wrap_Object(PolynomialParser$Unit(((t_PolynomialParser$Unit *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser$Unit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.toSI(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSI", arg);
        return NULL;
      }

      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PolynomialParser$Unit result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::valueOf(a0));
          return t_PolynomialParser$Unit::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type)
      {
        JArray< PolynomialParser$Unit > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::values());
        return JArray<jobject>(result.this$).wrap(t_PolynomialParser$Unit::wrap_jobject);
      }
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersionLoader.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader::class$ = NULL;
      jmethodID *ITRFVersionLoader::mids$ = NULL;
      bool ITRFVersionLoader::live$ = false;
      ::java::lang::String *ITRFVersionLoader::SUPPORTED_NAMES = NULL;

      jclass ITRFVersionLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getConfiguration_b4e9a20fc9bc25eb] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader::ITRFVersionLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ITRFVersionLoader::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_b4e9a20fc9bc25eb], a0.this$, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args);

      static PyMethodDef t_ITRFVersionLoader__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader)[] = {
        { Py_tp_methods, t_ITRFVersionLoader__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader, t_ITRFVersionLoader, ITRFVersionLoader);

      void t_ITRFVersionLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader), &PY_TYPE_DEF(ITRFVersionLoader), module, "ITRFVersionLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "ITRFVersionConfiguration", make_descriptor(&PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration)));
      }

      void t_ITRFVersionLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "class_", make_descriptor(ITRFVersionLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "wrapfn_", make_descriptor(t_ITRFVersionLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersionLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "SUPPORTED_NAMES", make_descriptor(j2p(*ITRFVersionLoader::SUPPORTED_NAMES)));
      }

      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader::wrap_Object(ITRFVersionLoader(((t_ITRFVersionLoader *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ITRFVersionLoader object((jobject) NULL);

            INT_CALL(object = ITRFVersionLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ITRFVersionLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ITRFVersionLoader(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedEarthFrameProvider.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedEarthFrameProvider::class$ = NULL;
        jmethodID *EstimatedEarthFrameProvider::mids$ = NULL;
        bool EstimatedEarthFrameProvider::live$ = false;
        jdouble EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY = (jdouble) 0;

        jclass EstimatedEarthFrameProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedEarthFrameProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_954476a37d8406bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_getEstimatedUT1_2493bae90e875538] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getPolarDriftXDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getStaticTransform_96493aacdf1acda1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
            mids$[mid_getStaticTransform_490485462b5938a0] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
            mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getTransform_0cded0dfc13641b5] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "EARTH_ANGULAR_VELOCITY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedEarthFrameProvider::EstimatedEarthFrameProvider(const ::org::orekit::time::UT1Scale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_954476a37d8406bd, a0.this$)) {}

        ::org::orekit::time::UT1Scale EstimatedEarthFrameProvider::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_2493bae90e875538]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::frames::StaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_96493aacdf1acda1], a0.this$));
        }

        ::org::orekit::frames::FieldStaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_490485462b5938a0], a0.this$));
        }

        ::org::orekit::frames::Transform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, jint a1, const ::java::util::Map & a2) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0cded0dfc13641b5], a0.this$, a1, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyGetSetDef t_EstimatedEarthFrameProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, estimatedUT1),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedEarthFrameProvider__methods_[] = {
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getStaticTransform, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getTransform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedEarthFrameProvider)[] = {
          { Py_tp_methods, t_EstimatedEarthFrameProvider__methods_ },
          { Py_tp_init, (void *) t_EstimatedEarthFrameProvider_init_ },
          { Py_tp_getset, t_EstimatedEarthFrameProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedEarthFrameProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedEarthFrameProvider, t_EstimatedEarthFrameProvider, EstimatedEarthFrameProvider);

        void t_EstimatedEarthFrameProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedEarthFrameProvider), &PY_TYPE_DEF(EstimatedEarthFrameProvider), module, "EstimatedEarthFrameProvider", 0);
        }

        void t_EstimatedEarthFrameProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "class_", make_descriptor(EstimatedEarthFrameProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "wrapfn_", make_descriptor(t_EstimatedEarthFrameProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedEarthFrameProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "EARTH_ANGULAR_VELOCITY", make_descriptor(EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY));
        }

        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 1)))
            return NULL;
          return t_EstimatedEarthFrameProvider::wrap_Object(EstimatedEarthFrameProvider(((t_EstimatedEarthFrameProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::UT1Scale a0((jobject) NULL);
          EstimatedEarthFrameProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
          {
            INT_CALL(object = EstimatedEarthFrameProvider(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::frames::StaticTransform result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getStaticTransform(a0));
                return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getStaticTransform(a0));
                return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransform(a0));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::java::util::Map a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "KIK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0, a1, a2));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *SubLimitAngle::class$ = NULL;
          jmethodID *SubLimitAngle::mids$ = NULL;
          bool SubLimitAngle::live$ = false;

          jclass SubLimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/SubLimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ece3b6638d417579] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_3b0163aa85fdaa47] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3227314555d80cc9] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLimitAngle::SubLimitAngle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_ece3b6638d417579, a0.this$, a1.this$)) {}

          jdouble SubLimitAngle::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
          }

          jboolean SubLimitAngle::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLimitAngle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_3b0163aa85fdaa47], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args);
          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data);
          static PyGetSetDef t_SubLimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_SubLimitAngle, empty),
            DECLARE_GET_FIELD(t_SubLimitAngle, size),
            DECLARE_GET_FIELD(t_SubLimitAngle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLimitAngle__methods_[] = {
            DECLARE_METHOD(t_SubLimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLimitAngle)[] = {
            { Py_tp_methods, t_SubLimitAngle__methods_ },
            { Py_tp_init, (void *) t_SubLimitAngle_init_ },
            { Py_tp_getset, t_SubLimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLimitAngle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLimitAngle, t_SubLimitAngle, SubLimitAngle);
          PyObject *t_SubLimitAngle::wrap_Object(const SubLimitAngle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLimitAngle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLimitAngle), &PY_TYPE_DEF(SubLimitAngle), module, "SubLimitAngle", 0);
          }

          void t_SubLimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "class_", make_descriptor(SubLimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "wrapfn_", make_descriptor(t_SubLimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLimitAngle::initializeClass, 1)))
              return NULL;
            return t_SubLimitAngle::wrap_Object(SubLimitAngle(((t_SubLimitAngle *) arg)->object.this$));
          }
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubLimitAngle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubLimitAngle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumListConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumListConsumer::mids$ = NULL;
            bool ParseToken$EnumListConsumer::live$ = false;

            jclass ParseToken$EnumListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_65de9727799c5641] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_65de9727799c5641], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumListConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumListConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumListConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumListConsumer, t_ParseToken$EnumListConsumer, ParseToken$EnumListConsumer);
            PyObject *t_ParseToken$EnumListConsumer::wrap_Object(const ParseToken$EnumListConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumListConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumListConsumer), &PY_TYPE_DEF(ParseToken$EnumListConsumer), module, "ParseToken$EnumListConsumer", 0);
            }

            void t_ParseToken$EnumListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "class_", make_descriptor(ParseToken$EnumListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumListConsumer::wrap_Object(ParseToken$EnumListConsumer(((t_ParseToken$EnumListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventsLogger.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger::class$ = NULL;
        jmethodID *EventsLogger::mids$ = NULL;
        bool EventsLogger::live$ = false;

        jclass EventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_7ae3461a92a43152] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_a6156df500549a58] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");
            mids$[mid_monitorDetector_ddfbe5016ff49e39] = env->getMethodID(cls, "monitorDetector", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/EventDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventsLogger::EventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void EventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_7ae3461a92a43152]);
        }

        ::java::util::List EventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_a6156df500549a58]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger::monitorDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_monitorDetector_ddfbe5016ff49e39], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg);
        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data);
        static PyGetSetDef t_EventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger, loggedEvents),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger__methods_[] = {
          DECLARE_METHOD(t_EventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, getLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, monitorDetector, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger)[] = {
          { Py_tp_methods, t_EventsLogger__methods_ },
          { Py_tp_init, (void *) t_EventsLogger_init_ },
          { Py_tp_getset, t_EventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger, t_EventsLogger, EventsLogger);

        void t_EventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger), &PY_TYPE_DEF(EventsLogger), module, "EventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "LoggedEvent", make_descriptor(&PY_TYPE_DEF(EventsLogger$LoggedEvent)));
        }

        void t_EventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "class_", make_descriptor(EventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "wrapfn_", make_descriptor(t_EventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger::initializeClass, 1)))
            return NULL;
          return t_EventsLogger::wrap_Object(EventsLogger(((t_EventsLogger *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds)
        {
          EventsLogger object((jobject) NULL);

          INT_CALL(object = EventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventsLogger$LoggedEvent));
        }

        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.monitorDetector(a0));
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "monitorDetector", arg);
          return NULL;
        }

        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggers::class$ = NULL;
          jmethodID *ManeuverTriggers::mids$ = NULL;
          bool ManeuverTriggers::live$ = false;

          jclass ManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_c5c7f3f3d4c4bba2] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_17ab38b8d22d6651] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_isFiring_b230552293273e68] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_80ee6edc2471fed7] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_c5c7f3f3d4c4bba2], a0.this$);
          }

          void ManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_17ab38b8d22d6651], a0.this$, a1.this$);
          }

          ::java::lang::String ManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_b230552293273e68], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_80ee6edc2471fed7], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self);
          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data);
          static PyGetSetDef t_ManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_ManeuverTriggers, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, getName, METH_NOARGS),
            DECLARE_METHOD(t_ManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggers)[] = {
            { Py_tp_methods, t_ManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggers, t_ManeuverTriggers, ManeuverTriggers);

          void t_ManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggers), &PY_TYPE_DEF(ManeuverTriggers), module, "ManeuverTriggers", 0);
          }

          void t_ManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "class_", make_descriptor(ManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "wrapfn_", make_descriptor(t_ManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggers::wrap_Object(ManeuverTriggers(((t_ManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouSatelliteType::class$ = NULL;
            jmethodID *BeidouSatelliteType::mids$ = NULL;
            bool BeidouSatelliteType::live$ = false;
            BeidouSatelliteType *BeidouSatelliteType::GEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::IGSO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::MEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::RESERVED = NULL;

            jclass BeidouSatelliteType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_8541da0c959162b5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_values_a3c53759a8492c00] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                GEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                IGSO = new BeidouSatelliteType(env->getStaticObjectField(cls, "IGSO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                MEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                RESERVED = new BeidouSatelliteType(env->getStaticObjectField(cls, "RESERVED", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouSatelliteType BeidouSatelliteType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return BeidouSatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8541da0c959162b5], a0.this$));
            }

            JArray< BeidouSatelliteType > BeidouSatelliteType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< BeidouSatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_a3c53759a8492c00]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args);
            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type);
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data);
            static PyGetSetDef t_BeidouSatelliteType__fields_[] = {
              DECLARE_GET_FIELD(t_BeidouSatelliteType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouSatelliteType__methods_[] = {
              DECLARE_METHOD(t_BeidouSatelliteType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, of_, METH_VARARGS),
              DECLARE_METHOD(t_BeidouSatelliteType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouSatelliteType)[] = {
              { Py_tp_methods, t_BeidouSatelliteType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_BeidouSatelliteType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouSatelliteType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(BeidouSatelliteType, t_BeidouSatelliteType, BeidouSatelliteType);
            PyObject *t_BeidouSatelliteType::wrap_Object(const BeidouSatelliteType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BeidouSatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BeidouSatelliteType::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouSatelliteType), &PY_TYPE_DEF(BeidouSatelliteType), module, "BeidouSatelliteType", 0);
            }

            void t_BeidouSatelliteType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "class_", make_descriptor(BeidouSatelliteType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "wrapfn_", make_descriptor(t_BeidouSatelliteType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouSatelliteType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "GEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::GEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "IGSO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::IGSO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "MEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::MEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "RESERVED", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::RESERVED)));
            }

            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouSatelliteType::initializeClass, 1)))
                return NULL;
              return t_BeidouSatelliteType::wrap_Object(BeidouSatelliteType(((t_BeidouSatelliteType *) arg)->object.this$));
            }
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouSatelliteType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              BeidouSatelliteType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::valueOf(a0));
                return t_BeidouSatelliteType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type)
            {
              JArray< BeidouSatelliteType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::values());
              return JArray<jobject>(result.this$).wrap(t_BeidouSatelliteType::wrap_jobject);
            }
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *GeodeticPoint::class$ = NULL;
      jmethodID *GeodeticPoint::mids$ = NULL;
      bool GeodeticPoint::live$ = false;
      GeodeticPoint *GeodeticPoint::NORTH_POLE = NULL;
      GeodeticPoint *GeodeticPoint::SOUTH_POLE = NULL;

      jclass GeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/GeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getEast_17a952530a808943] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getLatitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLatitude", "()D");
          mids$[mid_getLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLongitude", "()D");
          mids$[mid_getNadir_17a952530a808943] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_17a952530a808943] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSouth_17a952530a808943] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getWest_17a952530a808943] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_17a952530a808943] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "NORTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          SOUTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "SOUTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GeodeticPoint::GeodeticPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

      jboolean GeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jdouble GeodeticPoint::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_17a952530a808943]));
      }

      jdouble GeodeticPoint::getLatitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLatitude_456d9a2f64d6b28d]);
      }

      jdouble GeodeticPoint::getLongitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLongitude_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_17a952530a808943]));
      }

      jint GeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      ::java::lang::String GeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data);
      static PyGetSetDef t_GeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_GeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, east),
        DECLARE_GET_FIELD(t_GeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_GeodeticPoint, north),
        DECLARE_GET_FIELD(t_GeodeticPoint, south),
        DECLARE_GET_FIELD(t_GeodeticPoint, west),
        DECLARE_GET_FIELD(t_GeodeticPoint, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_GeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GeodeticPoint)[] = {
        { Py_tp_methods, t_GeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_GeodeticPoint_init_ },
        { Py_tp_getset, t_GeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GeodeticPoint, t_GeodeticPoint, GeodeticPoint);

      void t_GeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(GeodeticPoint), &PY_TYPE_DEF(GeodeticPoint), module, "GeodeticPoint", 0);
      }

      void t_GeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "class_", make_descriptor(GeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "wrapfn_", make_descriptor(t_GeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "boxfn_", make_descriptor(boxObject));
        env->getClass(GeodeticPoint::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "NORTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::NORTH_POLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "SOUTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::SOUTH_POLE)));
      }

      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_GeodeticPoint::wrap_Object(GeodeticPoint(((t_GeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        GeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = GeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLatitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLongitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLatitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLongitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagator::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagator::mids$ = NULL;
          bool GLONASSAnalyticalPropagator::live$ = false;

          jclass GLONASSAnalyticalPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_c8fe21bcdac65bf6] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getGLONASSOrbitalElements_bf10fc365bc8e89d] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
              mids$[mid_getMU_456d9a2f64d6b28d] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_propagateInEcef_72289093b5ce53a7] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_c8fe21bcdac65bf6]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_c8fe21bcdac65bf6]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSAnalyticalPropagator::getGLONASSOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_bf10fc365bc8e89d]));
          }

          jdouble GLONASSAnalyticalPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_456d9a2f64d6b28d]);
          }

          ::org::orekit::utils::PVCoordinates GLONASSAnalyticalPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_72289093b5ce53a7], a0.this$));
          }

          void GLONASSAnalyticalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type);
          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyGetSetDef t_GLONASSAnalyticalPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCEF),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCI),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, frame),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, gLONASSOrbitalElements),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, mU),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GLONASSAnalyticalPropagator__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagator)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GLONASSAnalyticalPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagator, t_GLONASSAnalyticalPropagator, GLONASSAnalyticalPropagator);

          void t_GLONASSAnalyticalPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagator), &PY_TYPE_DEF(GLONASSAnalyticalPropagator), module, "GLONASSAnalyticalPropagator", 0);
          }

          void t_GLONASSAnalyticalPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "class_", make_descriptor(GLONASSAnalyticalPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagator::wrap_Object(GLONASSAnalyticalPropagator(((t_GLONASSAnalyticalPropagator *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *RegressionResults::class$ = NULL;
        jmethodID *RegressionResults::mids$ = NULL;
        bool RegressionResults::live$ = false;

        jclass RegressionResults::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/RegressionResults");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_21e47bb2683cf2f8] = env->getMethodID(cls, "<init>", "([D[[DZJIDDDZZ)V");
            mids$[mid_getAdjustedRSquared_456d9a2f64d6b28d] = env->getMethodID(cls, "getAdjustedRSquared", "()D");
            mids$[mid_getCovarianceOfParameters_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getCovarianceOfParameters", "(II)D");
            mids$[mid_getErrorSumSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getErrorSumSquares", "()D");
            mids$[mid_getMeanSquareError_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getNumberOfParameters_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfParameters", "()I");
            mids$[mid_getParameterEstimate_b772323fc98b7293] = env->getMethodID(cls, "getParameterEstimate", "(I)D");
            mids$[mid_getParameterEstimates_7cdc325af0834901] = env->getMethodID(cls, "getParameterEstimates", "()[D");
            mids$[mid_getRSquared_456d9a2f64d6b28d] = env->getMethodID(cls, "getRSquared", "()D");
            mids$[mid_getRegressionSumSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getStdErrorOfEstimate_b772323fc98b7293] = env->getMethodID(cls, "getStdErrorOfEstimate", "(I)D");
            mids$[mid_getStdErrorOfEstimates_7cdc325af0834901] = env->getMethodID(cls, "getStdErrorOfEstimates", "()[D");
            mids$[mid_getTotalSumSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_hasIntercept_e470b6d9e0d979db] = env->getMethodID(cls, "hasIntercept", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegressionResults::RegressionResults(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jboolean a2, jlong a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jboolean a8, jboolean a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21e47bb2683cf2f8, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        jdouble RegressionResults::getAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAdjustedRSquared_456d9a2f64d6b28d]);
        }

        jdouble RegressionResults::getCovarianceOfParameters(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovarianceOfParameters_a84e4ee1da3f1ab8], a0, a1);
        }

        jdouble RegressionResults::getErrorSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getErrorSumSquares_456d9a2f64d6b28d]);
        }

        jdouble RegressionResults::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_456d9a2f64d6b28d]);
        }

        jlong RegressionResults::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jint RegressionResults::getNumberOfParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfParameters_f2f64475e4580546]);
        }

        jdouble RegressionResults::getParameterEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getParameterEstimate_b772323fc98b7293], a0);
        }

        JArray< jdouble > RegressionResults::getParameterEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterEstimates_7cdc325af0834901]));
        }

        jdouble RegressionResults::getRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquared_456d9a2f64d6b28d]);
        }

        jdouble RegressionResults::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_456d9a2f64d6b28d]);
        }

        jdouble RegressionResults::getStdErrorOfEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStdErrorOfEstimate_b772323fc98b7293], a0);
        }

        JArray< jdouble > RegressionResults::getStdErrorOfEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStdErrorOfEstimates_7cdc325af0834901]));
        }

        jdouble RegressionResults::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_456d9a2f64d6b28d]);
        }

        jboolean RegressionResults::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_e470b6d9e0d979db]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args);
        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getN(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self);
        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data);
        static PyGetSetDef t_RegressionResults__fields_[] = {
          DECLARE_GET_FIELD(t_RegressionResults, adjustedRSquared),
          DECLARE_GET_FIELD(t_RegressionResults, errorSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, meanSquareError),
          DECLARE_GET_FIELD(t_RegressionResults, n),
          DECLARE_GET_FIELD(t_RegressionResults, numberOfParameters),
          DECLARE_GET_FIELD(t_RegressionResults, parameterEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, rSquared),
          DECLARE_GET_FIELD(t_RegressionResults, regressionSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, stdErrorOfEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, totalSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegressionResults__methods_[] = {
          DECLARE_METHOD(t_RegressionResults, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, getAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getCovarianceOfParameters, METH_VARARGS),
          DECLARE_METHOD(t_RegressionResults, getErrorSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getN, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getNumberOfParameters, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, hasIntercept, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegressionResults)[] = {
          { Py_tp_methods, t_RegressionResults__methods_ },
          { Py_tp_init, (void *) t_RegressionResults_init_ },
          { Py_tp_getset, t_RegressionResults__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegressionResults)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegressionResults, t_RegressionResults, RegressionResults);

        void t_RegressionResults::install(PyObject *module)
        {
          installType(&PY_TYPE(RegressionResults), &PY_TYPE_DEF(RegressionResults), module, "RegressionResults", 0);
        }

        void t_RegressionResults::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "class_", make_descriptor(RegressionResults::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "wrapfn_", make_descriptor(t_RegressionResults::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegressionResults::initializeClass, 1)))
            return NULL;
          return t_RegressionResults::wrap_Object(RegressionResults(((t_RegressionResults *) arg)->object.this$));
        }
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegressionResults::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          jboolean a2;
          jlong a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jboolean a8;
          jboolean a9;
          RegressionResults object((jobject) NULL);

          if (!parseArgs(args, "[D[[DZJIDDDZZ", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = RegressionResults(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovarianceOfParameters(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovarianceOfParameters", args);
          return NULL;
        }

        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getN(t_RegressionResults *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getParameterEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParameterEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStdErrorOfEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStdErrorOfEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStdErrorOfEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParameterEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStdErrorOfEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldQRDecomposition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposition::class$ = NULL;
      jmethodID *FieldQRDecomposition::mids$ = NULL;
      bool FieldQRDecomposition::live$ = false;

      jclass FieldQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e03971cd3efa337] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_d13044a02bfe3981] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getH_cc77900a647586cf] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQ_cc77900a647586cf] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQT_cc77900a647586cf] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getR_cc77900a647586cf] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSolver_60ebb8b71a188d47] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_decompose_c1d86efdeccfe621] = env->getMethodID(cls, "decompose", "([[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_performHouseholderReflection_387aca903344205d] = env->getMethodID(cls, "performHouseholderReflection", "(I[[Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e03971cd3efa337, a0.this$)) {}

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d13044a02bfe3981, a0.this$, a1.this$)) {}

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getH_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQ_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQT_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getR_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_60ebb8b71a188d47]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args);
      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data);
      static PyGetSetDef t_FieldQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposition, h),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, q),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, qT),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, r),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposition)[] = {
        { Py_tp_methods, t_FieldQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposition_init_ },
        { Py_tp_getset, t_FieldQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposition, t_FieldQRDecomposition, FieldQRDecomposition);
      PyObject *t_FieldQRDecomposition::wrap_Object(const FieldQRDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposition), &PY_TYPE_DEF(FieldQRDecomposition), module, "FieldQRDecomposition", 0);
      }

      void t_FieldQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "class_", make_descriptor(FieldQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "wrapfn_", make_descriptor(t_FieldQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposition::wrap_Object(FieldQRDecomposition(((t_FieldQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldStateMapper.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldStateMapper::class$ = NULL;
        jmethodID *PythonFieldStateMapper::mids$ = NULL;
        bool PythonFieldStateMapper::live$ = false;

        jclass PythonFieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4653884aec3f35f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_1d69a30d154b40a6] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapStateToArray_f420296d747d4672] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldStateMapper::PythonFieldStateMapper(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::FieldStateMapper(env->newObject(initializeClass, &mids$, mid_init$_4653884aec3f35f9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonFieldStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldStateMapper::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args);
        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self);
        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data);
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data);
        static PyGetSetDef t_PythonFieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, self),
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonFieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldStateMapper)[] = {
          { Py_tp_methods, t_PythonFieldStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonFieldStateMapper_init_ },
          { Py_tp_getset, t_PythonFieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldStateMapper),
          NULL
        };

        DEFINE_TYPE(PythonFieldStateMapper, t_PythonFieldStateMapper, PythonFieldStateMapper);
        PyObject *t_PythonFieldStateMapper::wrap_Object(const PythonFieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldStateMapper), &PY_TYPE_DEF(PythonFieldStateMapper), module, "PythonFieldStateMapper", 1);
        }

        void t_PythonFieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "class_", make_descriptor(PythonFieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "wrapfn_", make_descriptor(t_PythonFieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonFieldStateMapper::wrap_Object(PythonFieldStateMapper(((t_PythonFieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonFieldStateMapper object((jobject) NULL);

          if (!parseArgs(args, "KKKKkk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonFieldStateMapper(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/ChiSquareTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *ChiSquareTest::class$ = NULL;
        jmethodID *ChiSquareTest::mids$ = NULL;
        bool ChiSquareTest::live$ = false;

        jclass ChiSquareTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/ChiSquareTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_chiSquare_04b1c4593e0336da] = env->getMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_bea0e17cbbf5365f] = env->getMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_84aeba7caf131216] = env->getMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_04b1c4593e0336da] = env->getMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_bea0e17cbbf5365f] = env->getMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_766218494e6ad3c9] = env->getMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_1663c18e69b1b60e] = env->getMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_84aeba7caf131216] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_c7887040a8242925] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquareTest::ChiSquareTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble ChiSquareTest::chiSquare(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_04b1c4593e0336da], a0.this$);
        }

        jdouble ChiSquareTest::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_04b1c4593e0336da], a0.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_766218494e6ad3c9], a0.this$, a1);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_1663c18e69b1b60e], a0.this$, a1.this$, a2);
        }

        jdouble ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_c7887040a8242925], a0.this$, a1.this$, a2);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args);

        static PyMethodDef t_ChiSquareTest__methods_[] = {
          DECLARE_METHOD(t_ChiSquareTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquare, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTest, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTestDataSetsComparison, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquareTest)[] = {
          { Py_tp_methods, t_ChiSquareTest__methods_ },
          { Py_tp_init, (void *) t_ChiSquareTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquareTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ChiSquareTest, t_ChiSquareTest, ChiSquareTest);

        void t_ChiSquareTest::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquareTest), &PY_TYPE_DEF(ChiSquareTest), module, "ChiSquareTest", 0);
        }

        void t_ChiSquareTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "class_", make_descriptor(ChiSquareTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "wrapfn_", make_descriptor(t_ChiSquareTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquareTest::initializeClass, 1)))
            return NULL;
          return t_ChiSquareTest::wrap_Object(ChiSquareTest(((t_ChiSquareTest *) arg)->object.this$));
        }
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquareTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds)
        {
          ChiSquareTest object((jobject) NULL);

          INT_CALL(object = ChiSquareTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariatePointValuePair::class$ = NULL;
        jmethodID *UnivariatePointValuePair::mids$ = NULL;
        bool UnivariatePointValuePair::live$ = false;

        jclass UnivariatePointValuePair::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariatePointValuePair");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPoint_456d9a2f64d6b28d] = env->getMethodID(cls, "getPoint", "()D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePointValuePair::UnivariatePointValuePair(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble UnivariatePointValuePair::getPoint() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPoint_456d9a2f64d6b28d]);
        }

        jdouble UnivariatePointValuePair::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data);
        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data);
        static PyGetSetDef t_UnivariatePointValuePair__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, point),
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariatePointValuePair__methods_[] = {
          DECLARE_METHOD(t_UnivariatePointValuePair, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePointValuePair)[] = {
          { Py_tp_methods, t_UnivariatePointValuePair__methods_ },
          { Py_tp_init, (void *) t_UnivariatePointValuePair_init_ },
          { Py_tp_getset, t_UnivariatePointValuePair__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePointValuePair)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePointValuePair, t_UnivariatePointValuePair, UnivariatePointValuePair);

        void t_UnivariatePointValuePair::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePointValuePair), &PY_TYPE_DEF(UnivariatePointValuePair), module, "UnivariatePointValuePair", 0);
        }

        void t_UnivariatePointValuePair::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "class_", make_descriptor(UnivariatePointValuePair::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "wrapfn_", make_descriptor(t_UnivariatePointValuePair::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePointValuePair::initializeClass, 1)))
            return NULL;
          return t_UnivariatePointValuePair::wrap_Object(UnivariatePointValuePair(((t_UnivariatePointValuePair *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePointValuePair::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          UnivariatePointValuePair object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = UnivariatePointValuePair(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPoint());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPoint());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractAmbiguityModifier::class$ = NULL;
          jmethodID *AbstractAmbiguityModifier::mids$ = NULL;
          bool AbstractAmbiguityModifier::live$ = false;

          jclass AbstractAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getDrivers_a6156df500549a58] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
              mids$[mid_doModifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "doModifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_doModify_a5896dbcbe782924] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractAmbiguityModifier::AbstractAmbiguityModifier(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractAmbiguityModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractAmbiguityModifier)[] = {
            { Py_tp_methods, t_AbstractAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractAmbiguityModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractAmbiguityModifier, t_AbstractAmbiguityModifier, AbstractAmbiguityModifier);

          void t_AbstractAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractAmbiguityModifier), &PY_TYPE_DEF(AbstractAmbiguityModifier), module, "AbstractAmbiguityModifier", 0);
          }

          void t_AbstractAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "class_", make_descriptor(AbstractAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "wrapfn_", make_descriptor(t_AbstractAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractAmbiguityModifier::wrap_Object(AbstractAmbiguityModifier(((t_AbstractAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            AbstractAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = AbstractAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/BesselJ.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ::class$ = NULL;
      jmethodID *BesselJ::mids$ = NULL;
      bool BesselJ::live$ = false;

      jclass BesselJ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_rjBesl_703e3b409181cd24] = env->getStaticMethodID(cls, "rjBesl", "(DDI)Lorg/hipparchus/special/BesselJ$BesselJResult;");
          mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_824133ce4aec3505] = env->getStaticMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ::BesselJ(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      ::org::hipparchus::special::BesselJ$BesselJResult BesselJ::rjBesl(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::special::BesselJ$BesselJResult(env->callStaticObjectMethod(cls, mids$[mid_rjBesl_703e3b409181cd24], a0, a1, a2));
      }

      jdouble BesselJ::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
      }

      jdouble BesselJ::value(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_value_824133ce4aec3505], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args);
      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg);
      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_BesselJ__methods_[] = {
        DECLARE_METHOD(t_BesselJ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, rjBesl, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, value, METH_O),
        DECLARE_METHOD(t_BesselJ, value_, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ)[] = {
        { Py_tp_methods, t_BesselJ__methods_ },
        { Py_tp_init, (void *) t_BesselJ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ, t_BesselJ, BesselJ);

      void t_BesselJ::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ), &PY_TYPE_DEF(BesselJ), module, "BesselJ", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "BesselJResult", make_descriptor(&PY_TYPE_DEF(BesselJ$BesselJResult)));
      }

      void t_BesselJ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "class_", make_descriptor(BesselJ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "wrapfn_", make_descriptor(t_BesselJ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ::initializeClass, 1)))
          return NULL;
        return t_BesselJ::wrap_Object(BesselJ(((t_BesselJ *) arg)->object.this$));
      }
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        BesselJ object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = BesselJ(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jint a2;
        ::org::hipparchus::special::BesselJ$BesselJResult result((jobject) NULL);

        if (!parseArgs(args, "DDI", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::rjBesl(a0, a1, a2));
          return ::org::hipparchus::special::t_BesselJ$BesselJResult::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "rjBesl", args);
        return NULL;
      }

      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::value(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "value_", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "java/util/List.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemData::class$ = NULL;
              jmethodID *OemData::mids$ = NULL;
              bool OemData::live$ = false;

              jclass OemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCovarianceMatrix_de787bc8e28948b1] = env->getMethodID(cls, "addCovarianceMatrix", "(Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                  mids$[mid_addData_6bdbaef092d674eb] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Z)Z");
                  mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_a6156df500549a58] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getEphemeridesDataLines_a6156df500549a58] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemData::OemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              void OemData::addCovarianceMatrix(const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCovarianceMatrix_de787bc8e28948b1], a0.this$);
              }

              jboolean OemData::addData(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, jboolean a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_6bdbaef092d674eb], a0.this$, a1);
              }

              ::org::orekit::utils::CartesianDerivativesFilter OemData::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
              }

              ::java::util::List OemData::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
              }

              ::java::util::List OemData::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_a6156df500549a58]));
              }

              ::java::util::List OemData::getEphemeridesDataLines() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_a6156df500549a58]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg);
              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args);
              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self);
              static PyObject *t_OemData_getCoordinates(t_OemData *self);
              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self);
              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self);
              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data);
              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data);
              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data);
              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data);
              static PyGetSetDef t_OemData__fields_[] = {
                DECLARE_GET_FIELD(t_OemData, availableDerivatives),
                DECLARE_GET_FIELD(t_OemData, coordinates),
                DECLARE_GET_FIELD(t_OemData, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemData, ephemeridesDataLines),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemData__methods_[] = {
                DECLARE_METHOD(t_OemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, addCovarianceMatrix, METH_O),
                DECLARE_METHOD(t_OemData, addData, METH_VARARGS),
                DECLARE_METHOD(t_OemData, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getEphemeridesDataLines, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemData)[] = {
                { Py_tp_methods, t_OemData__methods_ },
                { Py_tp_init, (void *) t_OemData_init_ },
                { Py_tp_getset, t_OemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OemData, t_OemData, OemData);

              void t_OemData::install(PyObject *module)
              {
                installType(&PY_TYPE(OemData), &PY_TYPE_DEF(OemData), module, "OemData", 0);
              }

              void t_OemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "class_", make_descriptor(OemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "wrapfn_", make_descriptor(t_OemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemData::initializeClass, 1)))
                  return NULL;
                return t_OemData::wrap_Object(OemData(((t_OemData *) arg)->object.this$));
              }
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds)
              {
                OemData object((jobject) NULL);

                INT_CALL(object = OemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCovarianceMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCovarianceMatrix", arg);
                return NULL;
              }

              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                jboolean a1;
                jboolean result;

                if (!parseArgs(args, "kZ", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.addData(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", args);
                return NULL;
              }

              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemData_getCoordinates(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FixedStepSelector.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FixedStepSelector::class$ = NULL;
      jmethodID *FixedStepSelector::mids$ = NULL;
      bool FixedStepSelector::live$ = false;

      jclass FixedStepSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FixedStepSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_60e5ac0cc7094de6] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_b7149ea6787a6f3c] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedStepSelector::FixedStepSelector(jdouble a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_60e5ac0cc7094de6, a0, a1.this$)) {}

      ::java::util::List FixedStepSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_b7149ea6787a6f3c], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args);

      static PyMethodDef t_FixedStepSelector__methods_[] = {
        DECLARE_METHOD(t_FixedStepSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedStepSelector)[] = {
        { Py_tp_methods, t_FixedStepSelector__methods_ },
        { Py_tp_init, (void *) t_FixedStepSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedStepSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedStepSelector, t_FixedStepSelector, FixedStepSelector);

      void t_FixedStepSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedStepSelector), &PY_TYPE_DEF(FixedStepSelector), module, "FixedStepSelector", 0);
      }

      void t_FixedStepSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "class_", make_descriptor(FixedStepSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "wrapfn_", make_descriptor(t_FixedStepSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedStepSelector::initializeClass, 1)))
          return NULL;
        return t_FixedStepSelector::wrap_Object(FixedStepSelector(((t_FixedStepSelector *) arg)->object.this$));
      }
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedStepSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        FixedStepSelector object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FixedStepSelector(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logit.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit::class$ = NULL;
        jmethodID *Logit::mids$ = NULL;
        bool Logit::live$ = false;

        jclass Logit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit::Logit() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        Logit::Logit(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble Logit::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logit::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit_value(t_Logit *self, PyObject *args);

        static PyMethodDef t_Logit__methods_[] = {
          DECLARE_METHOD(t_Logit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit)[] = {
          { Py_tp_methods, t_Logit__methods_ },
          { Py_tp_init, (void *) t_Logit_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit, t_Logit, Logit);

        void t_Logit::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit), &PY_TYPE_DEF(Logit), module, "Logit", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "Parametric", make_descriptor(&PY_TYPE_DEF(Logit$Parametric)));
        }

        void t_Logit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "class_", make_descriptor(Logit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "wrapfn_", make_descriptor(t_Logit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit::initializeClass, 1)))
            return NULL;
          return t_Logit::wrap_Object(Logit(((t_Logit *) arg)->object.this$));
        }
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Logit object((jobject) NULL);

              INT_CALL(object = Logit());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Logit object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Logit(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Logit_value(t_Logit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *NullArgumentException::class$ = NULL;
      jmethodID *NullArgumentException::mids$ = NULL;
      bool NullArgumentException::live$ = false;

      jclass NullArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/NullArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NullArgumentException::NullArgumentException() : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      NullArgumentException::NullArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      ::java::lang::String NullArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String NullArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String NullArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > NullArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable NullArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data);
      static PyGetSetDef t_NullArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_NullArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_NullArgumentException, message),
        DECLARE_GET_FIELD(t_NullArgumentException, parts),
        DECLARE_GET_FIELD(t_NullArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NullArgumentException__methods_[] = {
        DECLARE_METHOD(t_NullArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_NullArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NullArgumentException)[] = {
        { Py_tp_methods, t_NullArgumentException__methods_ },
        { Py_tp_init, (void *) t_NullArgumentException_init_ },
        { Py_tp_getset, t_NullArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NullArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::NullPointerException),
        NULL
      };

      DEFINE_TYPE(NullArgumentException, t_NullArgumentException, NullArgumentException);

      void t_NullArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(NullArgumentException), &PY_TYPE_DEF(NullArgumentException), module, "NullArgumentException", 0);
      }

      void t_NullArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "class_", make_descriptor(NullArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "wrapfn_", make_descriptor(t_NullArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NullArgumentException::initializeClass, 1)))
          return NULL;
        return t_NullArgumentException::wrap_Object(NullArgumentException(((t_NullArgumentException *) arg)->object.this$));
      }
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NullArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            NullArgumentException object((jobject) NULL);

            INT_CALL(object = NullArgumentException());
            self->object = object;
            break;
          }
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            NullArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = NullArgumentException(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationsBlock::class$ = NULL;
            jmethodID *ObservationsBlock::mids$ = NULL;
            bool ObservationsBlock::live$ = false;

            jclass ObservationsBlock::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationsBlock");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addObservation_e13ef2e2ed1f9373] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/Observation;)V");
                mids$[mid_addObservation_07829ca5e164764b] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getObservations_a6156df500549a58] = env->getMethodID(cls, "getObservations", "()Ljava/util/List;");
                mids$[mid_setObservations_65de9727799c5641] = env->getMethodID(cls, "setObservations", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ObservationsBlock::ObservationsBlock() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::Observation & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_e13ef2e2ed1f9373], a0.this$);
            }

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_07829ca5e164764b], a0.this$, a1.this$, a2);
            }

            ::java::util::List ObservationsBlock::getObservations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservations_a6156df500549a58]));
            }

            void ObservationsBlock::setObservations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObservations_65de9727799c5641], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args);
            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self);
            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg);
            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data);
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data);
            static PyGetSetDef t_ObservationsBlock__fields_[] = {
              DECLARE_GETSET_FIELD(t_ObservationsBlock, observations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationsBlock__methods_[] = {
              DECLARE_METHOD(t_ObservationsBlock, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, addObservation, METH_VARARGS),
              DECLARE_METHOD(t_ObservationsBlock, getObservations, METH_NOARGS),
              DECLARE_METHOD(t_ObservationsBlock, setObservations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationsBlock)[] = {
              { Py_tp_methods, t_ObservationsBlock__methods_ },
              { Py_tp_init, (void *) t_ObservationsBlock_init_ },
              { Py_tp_getset, t_ObservationsBlock__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationsBlock)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ObservationsBlock, t_ObservationsBlock, ObservationsBlock);

            void t_ObservationsBlock::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationsBlock), &PY_TYPE_DEF(ObservationsBlock), module, "ObservationsBlock", 0);
            }

            void t_ObservationsBlock::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "class_", make_descriptor(ObservationsBlock::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "wrapfn_", make_descriptor(t_ObservationsBlock::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationsBlock::initializeClass, 1)))
                return NULL;
              return t_ObservationsBlock::wrap_Object(ObservationsBlock(((t_ObservationsBlock *) arg)->object.this$));
            }
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationsBlock::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds)
            {
              ObservationsBlock object((jobject) NULL);

              INT_CALL(object = ObservationsBlock());
              self->object = object;

              return 0;
            }

            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::Observation a0((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::tdm::Observation::initializeClass, &a0))
                  {
                    OBJ_CALL(self->object.addObservation(a0));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 3:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  jdouble a2;

                  if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(self->object.addObservation(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "addObservation", args);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Observation));
            }

            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setObservations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObservations", arg);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setObservations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "observations", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader$Parser::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader$Parser::mids$ = NULL;
      bool TAIUTCDatFilesLoader$Parser::live$ = false;

      jclass TAIUTCDatFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_90de289641581563] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader$Parser::TAIUTCDatFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::java::util::List TAIUTCDatFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_90de289641581563], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_TAIUTCDatFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader$Parser)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader$Parser, t_TAIUTCDatFilesLoader$Parser, TAIUTCDatFilesLoader$Parser);

      void t_TAIUTCDatFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader$Parser), &PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser), module, "TAIUTCDatFilesLoader$Parser", 0);
      }

      void t_TAIUTCDatFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "class_", make_descriptor(TAIUTCDatFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader$Parser::wrap_Object(TAIUTCDatFilesLoader$Parser(((t_TAIUTCDatFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        TAIUTCDatFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = TAIUTCDatFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion$Converter::class$ = NULL;
      jmethodID *ITRFVersion$Converter::mids$ = NULL;
      bool ITRFVersion$Converter::live$ = false;

      jclass ITRFVersion$Converter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion$Converter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDestination_f157e1cf87d45e2d] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_f157e1cf87d45e2d] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getStaticTransform_96493aacdf1acda1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_490485462b5938a0] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_f157e1cf87d45e2d]));
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_f157e1cf87d45e2d]));
      }

      ::org::orekit::frames::StaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_96493aacdf1acda1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_490485462b5938a0], a0.this$));
      }

      ::org::orekit::frames::Transform ITRFVersion$Converter::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ITRFVersion$Converter::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data);
      static PyGetSetDef t_ITRFVersion$Converter__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, destination),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, origin),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion$Converter__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion$Converter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion$Converter)[] = {
        { Py_tp_methods, t_ITRFVersion$Converter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion$Converter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion$Converter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersion$Converter, t_ITRFVersion$Converter, ITRFVersion$Converter);
      PyObject *t_ITRFVersion$Converter::wrap_Object(const ITRFVersion$Converter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion$Converter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion$Converter::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion$Converter), &PY_TYPE_DEF(ITRFVersion$Converter), module, "ITRFVersion$Converter", 0);
      }

      void t_ITRFVersion$Converter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "class_", make_descriptor(ITRFVersion$Converter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "wrapfn_", make_descriptor(t_ITRFVersion$Converter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion$Converter::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion$Converter::wrap_Object(ITRFVersion$Converter(((t_ITRFVersion$Converter *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion$Converter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
