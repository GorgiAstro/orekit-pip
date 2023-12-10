#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiTheta::class$ = NULL;
          jmethodID *FieldJacobiTheta::mids$ = NULL;
          bool FieldJacobiTheta::live$ = false;

          jclass FieldJacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getQ_e6d4d3215c30992a] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_values_712c0545ee634cb2] = env->getMethodID(cls, "values", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldTheta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldJacobiTheta::FieldJacobiTheta(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

          ::org::hipparchus::CalculusFieldElement FieldJacobiTheta::getQ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_e6d4d3215c30992a]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldTheta FieldJacobiTheta::values(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldTheta(env->callObjectMethod(this$, mids$[mid_values_712c0545ee634cb2], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args);
          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self);
          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data);
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data);
          static PyGetSetDef t_FieldJacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiTheta, q),
            DECLARE_GET_FIELD(t_FieldJacobiTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiTheta__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiTheta)[] = {
            { Py_tp_methods, t_FieldJacobiTheta__methods_ },
            { Py_tp_init, (void *) t_FieldJacobiTheta_init_ },
            { Py_tp_getset, t_FieldJacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiTheta, t_FieldJacobiTheta, FieldJacobiTheta);
          PyObject *t_FieldJacobiTheta::wrap_Object(const FieldJacobiTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiTheta), &PY_TYPE_DEF(FieldJacobiTheta), module, "FieldJacobiTheta", 0);
          }

          void t_FieldJacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "class_", make_descriptor(FieldJacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "wrapfn_", make_descriptor(t_FieldJacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiTheta::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiTheta::wrap_Object(FieldJacobiTheta(((t_FieldJacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldJacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldJacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::special::elliptic::jacobi::FieldTheta result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_FieldTheta::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexBaseHeader::class$ = NULL;
          jmethodID *RinexBaseHeader::mids$ = NULL;
          bool RinexBaseHeader::live$ = false;

          jclass RinexBaseHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexBaseHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCreationDate_aaa854c403487cf3] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateComponents_e3c5f80897e753d6] = env->getMethodID(cls, "getCreationDateComponents", "()Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getCreationTimeZone_0090f7797e403f43] = env->getMethodID(cls, "getCreationTimeZone", "()Ljava/lang/String;");
              mids$[mid_getDoi_0090f7797e403f43] = env->getMethodID(cls, "getDoi", "()Ljava/lang/String;");
              mids$[mid_getFileType_28f7342554538782] = env->getMethodID(cls, "getFileType", "()Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_getFormatVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getLicense_0090f7797e403f43] = env->getMethodID(cls, "getLicense", "()Ljava/lang/String;");
              mids$[mid_getProgramName_0090f7797e403f43] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getRunByName_0090f7797e403f43] = env->getMethodID(cls, "getRunByName", "()Ljava/lang/String;");
              mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getStationInformation_0090f7797e403f43] = env->getMethodID(cls, "getStationInformation", "()Ljava/lang/String;");
              mids$[mid_setCreationDate_e82d68cd9f886886] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateComponents_994b26ed44999e86] = env->getMethodID(cls, "setCreationDateComponents", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_setCreationTimeZone_e939c6558ae8d313] = env->getMethodID(cls, "setCreationTimeZone", "(Ljava/lang/String;)V");
              mids$[mid_setDoi_e939c6558ae8d313] = env->getMethodID(cls, "setDoi", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setLicense_e939c6558ae8d313] = env->getMethodID(cls, "setLicense", "(Ljava/lang/String;)V");
              mids$[mid_setProgramName_e939c6558ae8d313] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setRunByName_e939c6558ae8d313] = env->getMethodID(cls, "setRunByName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_a9204a81fe55aebe] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationInformation_e939c6558ae8d313] = env->getMethodID(cls, "setStationInformation", "(Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate RinexBaseHeader::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_aaa854c403487cf3]));
          }

          ::org::orekit::time::DateTimeComponents RinexBaseHeader::getCreationDateComponents() const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getCreationDateComponents_e3c5f80897e753d6]));
          }

          ::java::lang::String RinexBaseHeader::getCreationTimeZone() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZone_0090f7797e403f43]));
          }

          ::java::lang::String RinexBaseHeader::getDoi() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDoi_0090f7797e403f43]));
          }

          ::org::orekit::files::rinex::utils::RinexFileType RinexBaseHeader::getFileType() const
          {
            return ::org::orekit::files::rinex::utils::RinexFileType(env->callObjectMethod(this$, mids$[mid_getFileType_28f7342554538782]));
          }

          jdouble RinexBaseHeader::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_456d9a2f64d6b28d]);
          }

          ::java::lang::String RinexBaseHeader::getLicense() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLicense_0090f7797e403f43]));
          }

          ::java::lang::String RinexBaseHeader::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_0090f7797e403f43]));
          }

          ::java::lang::String RinexBaseHeader::getRunByName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRunByName_0090f7797e403f43]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexBaseHeader::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
          }

          ::java::lang::String RinexBaseHeader::getStationInformation() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationInformation_0090f7797e403f43]));
          }

          void RinexBaseHeader::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_e82d68cd9f886886], a0.this$);
          }

          void RinexBaseHeader::setCreationDateComponents(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateComponents_994b26ed44999e86], a0.this$);
          }

          void RinexBaseHeader::setCreationTimeZone(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZone_e939c6558ae8d313], a0.this$);
          }

          void RinexBaseHeader::setDoi(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDoi_e939c6558ae8d313], a0.this$);
          }

          void RinexBaseHeader::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_77e0f9a1f260e2e5], a0);
          }

          void RinexBaseHeader::setLicense(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLicense_e939c6558ae8d313], a0.this$);
          }

          void RinexBaseHeader::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_e939c6558ae8d313], a0.this$);
          }

          void RinexBaseHeader::setRunByName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRunByName_e939c6558ae8d313], a0.this$);
          }

          void RinexBaseHeader::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_a9204a81fe55aebe], a0.this$);
          }

          void RinexBaseHeader::setStationInformation(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationInformation_e939c6558ae8d313], a0.this$);
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
        namespace section {
          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data);
          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyGetSetDef t_RinexBaseHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDate),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDateComponents),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationTimeZone),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, doi),
            DECLARE_GET_FIELD(t_RinexBaseHeader, fileType),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, formatVersion),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, license),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, programName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, runByName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, satelliteSystem),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, stationInformation),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexBaseHeader__methods_[] = {
            DECLARE_METHOD(t_RinexBaseHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDateComponents, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationTimeZone, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getDoi, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFileType, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getLicense, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getRunByName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getStationInformation, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDateComponents, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationTimeZone, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setDoi, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setLicense, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setRunByName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setStationInformation, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexBaseHeader)[] = {
            { Py_tp_methods, t_RinexBaseHeader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexBaseHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexBaseHeader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexBaseHeader, t_RinexBaseHeader, RinexBaseHeader);

          void t_RinexBaseHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexBaseHeader), &PY_TYPE_DEF(RinexBaseHeader), module, "RinexBaseHeader", 0);
          }

          void t_RinexBaseHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "class_", make_descriptor(RinexBaseHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "wrapfn_", make_descriptor(t_RinexBaseHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexBaseHeader::initializeClass, 1)))
              return NULL;
            return t_RinexBaseHeader::wrap_Object(RinexBaseHeader(((t_RinexBaseHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexBaseHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZone());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoi());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self)
          {
            ::org::orekit::files::rinex::utils::RinexFileType result((jobject) NULL);
            OBJ_CALL(result = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLicense());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRunByName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationInformation());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDateComponents(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateComponents", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZone(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZone", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setDoi(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDoi", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setLicense(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLicense", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setRunByName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRunByName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationInformation(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationInformation", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::DateTimeComponents value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::DateTimeComponents value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDateComponents(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateComponents", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZone());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZone(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZone", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoi());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setDoi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "doi", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::files::rinex::utils::RinexFileType value((jobject) NULL);
            OBJ_CALL(value = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(value);
          }

          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLicense());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setLicense(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "license", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRunByName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setRunByName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "runByName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationInformation());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationInformation(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationInformation", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Exp.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Exp::class$ = NULL;
        jmethodID *Exp::mids$ = NULL;
        bool Exp::live$ = false;

        jclass Exp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Exp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Exp::Exp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Exp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Exp::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Exp_value(t_Exp *self, PyObject *args);

        static PyMethodDef t_Exp__methods_[] = {
          DECLARE_METHOD(t_Exp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Exp)[] = {
          { Py_tp_methods, t_Exp__methods_ },
          { Py_tp_init, (void *) t_Exp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Exp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Exp, t_Exp, Exp);

        void t_Exp::install(PyObject *module)
        {
          installType(&PY_TYPE(Exp), &PY_TYPE_DEF(Exp), module, "Exp", 0);
        }

        void t_Exp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "class_", make_descriptor(Exp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "wrapfn_", make_descriptor(t_Exp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Exp::initializeClass, 1)))
            return NULL;
          return t_Exp::wrap_Object(Exp(((t_Exp *) arg)->object.this$));
        }
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Exp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds)
        {
          Exp object((jobject) NULL);

          INT_CALL(object = Exp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Exp_value(t_Exp *self, PyObject *args)
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
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TDBScale::class$ = NULL;
      jmethodID *TDBScale::mids$ = NULL;
      bool TDBScale::live$ = false;

      jclass TDBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TDBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TDBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble TDBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TDBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String TDBScale::toString() const
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
    namespace time {
      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_getName(t_TDBScale *self);
      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data);
      static PyGetSetDef t_TDBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TDBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TDBScale__methods_[] = {
        DECLARE_METHOD(t_TDBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TDBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TDBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TDBScale)[] = {
        { Py_tp_methods, t_TDBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TDBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TDBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TDBScale, t_TDBScale, TDBScale);

      void t_TDBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TDBScale), &PY_TYPE_DEF(TDBScale), module, "TDBScale", 0);
      }

      void t_TDBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "class_", make_descriptor(TDBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "wrapfn_", make_descriptor(t_TDBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TDBScale::initializeClass, 1)))
          return NULL;
        return t_TDBScale::wrap_Object(TDBScale(((t_TDBScale *) arg)->object.this$));
      }
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TDBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TDBScale_getName(t_TDBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TDBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999::class$ = NULL;
              jmethodID *Alfriend1999::mids$ = NULL;
              bool Alfriend1999::live$ = false;

              jclass Alfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999::Alfriend1999() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_830fb81b25fc6619]));
              }

              jboolean Alfriend1999::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db]);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data);
              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data);
              static PyGetSetDef t_Alfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999)[] = {
                { Py_tp_methods, t_Alfriend1999__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999_init_ },
                { Py_tp_getset, t_Alfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999, t_Alfriend1999, Alfriend1999);

              void t_Alfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999), &PY_TYPE_DEF(Alfriend1999), module, "Alfriend1999", 0);
              }

              void t_Alfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "class_", make_descriptor(Alfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "wrapfn_", make_descriptor(t_Alfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999::wrap_Object(Alfriend1999(((t_Alfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999 object((jobject) NULL);

                INT_CALL(object = Alfriend1999());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericComputationParameters::class$ = NULL;
        jmethodID *AtmosphericComputationParameters::mids$ = NULL;
        bool AtmosphericComputationParameters::live$ = false;

        jclass AtmosphericComputationParameters::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericComputationParameters");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_configureCorrectionGrid_75c5b898b43a4df8] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_getDefaultInverseLocMargin_456d9a2f64d6b28d] = env->getMethodID(cls, "getDefaultInverseLocMargin", "()D");
            mids$[mid_getInverseLocMargin_456d9a2f64d6b28d] = env->getMethodID(cls, "getInverseLocMargin", "()D");
            mids$[mid_getMaxLineSensor_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxLineSensor", "()D");
            mids$[mid_getMinLineSensor_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinLineSensor", "()D");
            mids$[mid_getNbLineGrid_f2f64475e4580546] = env->getMethodID(cls, "getNbLineGrid", "()I");
            mids$[mid_getNbPixelGrid_f2f64475e4580546] = env->getMethodID(cls, "getNbPixelGrid", "()I");
            mids$[mid_getSensorName_0090f7797e403f43] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");
            mids$[mid_getUgrid_7cdc325af0834901] = env->getMethodID(cls, "getUgrid", "()[D");
            mids$[mid_getVgrid_7cdc325af0834901] = env->getMethodID(cls, "getVgrid", "()[D");
            mids$[mid_setGridSteps_8dbc1129a3c2557a] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AtmosphericComputationParameters::AtmosphericComputationParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void AtmosphericComputationParameters::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_75c5b898b43a4df8], a0.this$, a1, a2);
        }

        jdouble AtmosphericComputationParameters::getDefaultInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultInverseLocMargin_456d9a2f64d6b28d]);
        }

        jdouble AtmosphericComputationParameters::getInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInverseLocMargin_456d9a2f64d6b28d]);
        }

        jdouble AtmosphericComputationParameters::getMaxLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxLineSensor_456d9a2f64d6b28d]);
        }

        jdouble AtmosphericComputationParameters::getMinLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinLineSensor_456d9a2f64d6b28d]);
        }

        jint AtmosphericComputationParameters::getNbLineGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbLineGrid_f2f64475e4580546]);
        }

        jint AtmosphericComputationParameters::getNbPixelGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixelGrid_f2f64475e4580546]);
        }

        ::java::lang::String AtmosphericComputationParameters::getSensorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_0090f7797e403f43]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getUgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUgrid_7cdc325af0834901]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getVgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVgrid_7cdc325af0834901]));
        }

        void AtmosphericComputationParameters::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_8dbc1129a3c2557a], a0, a1);
        }

        void AtmosphericComputationParameters::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_77e0f9a1f260e2e5], a0);
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
    namespace rugged {
      namespace refraction {
        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data);
        static PyGetSetDef t_AtmosphericComputationParameters__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, defaultInverseLocMargin),
          DECLARE_GETSET_FIELD(t_AtmosphericComputationParameters, inverseLocMargin),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, maxLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, minLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbLineGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbPixelGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, sensorName),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, ugrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, vgrid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericComputationParameters__methods_[] = {
          DECLARE_METHOD(t_AtmosphericComputationParameters, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getDefaultInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMaxLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMinLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbLineGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbPixelGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getSensorName, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getUgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getVgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericComputationParameters)[] = {
          { Py_tp_methods, t_AtmosphericComputationParameters__methods_ },
          { Py_tp_init, (void *) t_AtmosphericComputationParameters_init_ },
          { Py_tp_getset, t_AtmosphericComputationParameters__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericComputationParameters)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericComputationParameters, t_AtmosphericComputationParameters, AtmosphericComputationParameters);

        void t_AtmosphericComputationParameters::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericComputationParameters), &PY_TYPE_DEF(AtmosphericComputationParameters), module, "AtmosphericComputationParameters", 0);
        }

        void t_AtmosphericComputationParameters::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "class_", make_descriptor(AtmosphericComputationParameters::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "wrapfn_", make_descriptor(t_AtmosphericComputationParameters::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericComputationParameters::initializeClass, 1)))
            return NULL;
          return t_AtmosphericComputationParameters::wrap_Object(AtmosphericComputationParameters(((t_AtmosphericComputationParameters *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericComputationParameters::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds)
        {
          AtmosphericComputationParameters object((jobject) NULL);

          INT_CALL(object = AtmosphericComputationParameters());
          self->object = object;

          return 0;
        }

        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbLineGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensorName());
          return j2p(result);
        }

        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }

        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbLineGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensorName());
          return j2p(value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUgrid());
          return value.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVgrid());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepNormalizer::class$ = NULL;
        jmethodID *OrekitStepNormalizer::mids$ = NULL;
        bool OrekitStepNormalizer::live$ = false;

        jclass OrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ae887d6ebf6ba107] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getFixedStepHandler_ab9c382395b68cd4] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_eb797cf50ec4b2c4] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitStepNormalizer::OrekitStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae887d6ebf6ba107, a0, a1.this$)) {}

        void OrekitStepNormalizer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
        }

        ::org::orekit::propagation::sampling::OrekitFixedStepHandler OrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::OrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_ab9c382395b68cd4]));
        }

        jdouble OrekitStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_456d9a2f64d6b28d]);
        }

        void OrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_eb797cf50ec4b2c4], a0.this$);
        }

        void OrekitStepNormalizer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data);
        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_OrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_OrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepNormalizer)[] = {
          { Py_tp_methods, t_OrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_OrekitStepNormalizer_init_ },
          { Py_tp_getset, t_OrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepNormalizer, t_OrekitStepNormalizer, OrekitStepNormalizer);

        void t_OrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepNormalizer), &PY_TYPE_DEF(OrekitStepNormalizer), module, "OrekitStepNormalizer", 0);
        }

        void t_OrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "class_", make_descriptor(OrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "wrapfn_", make_descriptor(t_OrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_OrekitStepNormalizer::wrap_Object(OrekitStepNormalizer(((t_OrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);
          OrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = OrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggers::class$ = NULL;
          jmethodID *PythonManeuverTriggers::mids$ = NULL;
          bool PythonManeuverTriggers::live$ = false;

          jclass PythonManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addResetter_c5c7f3f3d4c4bba2] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_17ab38b8d22d6651] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_b230552293273e68] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_80ee6edc2471fed7] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggers::PythonManeuverTriggers() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonManeuverTriggers::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self);
          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggers, t_PythonManeuverTriggers, PythonManeuverTriggers);

          void t_PythonManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggers), &PY_TYPE_DEF(PythonManeuverTriggers), module, "PythonManeuverTriggers", 1);
          }

          void t_PythonManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "class_", make_descriptor(PythonManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "wrapfn_", make_descriptor(t_PythonManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter0 },
              { "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter1 },
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getEventDetectors2 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getFieldEventDetectors3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonManeuverTriggers_getParametersDrivers4 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonManeuverTriggers_init5 },
              { "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z", (void *) t_PythonManeuverTriggers_isFiring6 },
              { "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonManeuverTriggers_isFiring7 },
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggers_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggers::wrap_Object(PythonManeuverTriggers(((t_PythonManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter(a0));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter(a1));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_3594980528b155c7] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_f0cefcb1f788b672] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator;");
            mids$[mid_decomposer_15ac1308d97524be] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_2e69654da345a1e3] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_aedddb46d6dfe2a9] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder::SemiAnalyticalUnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_3594980528b155c7], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator SemiAnalyticalUnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_f0cefcb1f788b672]));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_15ac1308d97524be], a0.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_2e69654da345a1e3], a0.this$, a1.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_aedddb46d6dfe2a9], a0.this$));
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
      namespace sequential {
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, SemiAnalyticalUnscentedKalmanEstimatorBuilder);

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimatorBuilder), module, "SemiAnalyticalUnscentedKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalUnscentedKalmanEstimatorBuilder(((t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalUnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalUnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonMultipleShooting::class$ = NULL;
      jmethodID *PythonMultipleShooting::mids$ = NULL;
      bool PythonMultipleShooting::live$ = false;

      jclass PythonMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compute_a6156df500549a58] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMultipleShooting::PythonMultipleShooting() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonMultipleShooting::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self);
      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMultipleShooting)[] = {
        { Py_tp_methods, t_PythonMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonMultipleShooting_init_ },
        { Py_tp_getset, t_PythonMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMultipleShooting, t_PythonMultipleShooting, PythonMultipleShooting);

      void t_PythonMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMultipleShooting), &PY_TYPE_DEF(PythonMultipleShooting), module, "PythonMultipleShooting", 1);
      }

      void t_PythonMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "class_", make_descriptor(PythonMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "wrapfn_", make_descriptor(t_PythonMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "compute", "()Ljava/util/List;", (void *) t_PythonMultipleShooting_compute0 },
          { "pythonDecRef", "()V", (void *) t_PythonMultipleShooting_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonMultipleShooting::wrap_Object(PythonMultipleShooting(((t_PythonMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        PythonMultipleShooting object((jobject) NULL);

        INT_CALL(object = PythonMultipleShooting());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args)
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

      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "compute", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("compute", result);
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

      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/hull/ConvexHullGenerator.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHullGenerator::class$ = NULL;
        jmethodID *ConvexHullGenerator::mids$ = NULL;
        bool ConvexHullGenerator::live$ = false;

        jclass ConvexHullGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHullGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_generate_74156a60b00a4a08] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/hull/ConvexHull;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::hull::ConvexHull ConvexHullGenerator::generate(const ::java::util::Collection & a0) const
        {
          return ::org::hipparchus::geometry::hull::ConvexHull(env->callObjectMethod(this$, mids$[mid_generate_74156a60b00a4a08], a0.this$));
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
      namespace hull {
        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args);
        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data);
        static PyGetSetDef t_ConvexHullGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHullGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHullGenerator__methods_[] = {
          DECLARE_METHOD(t_ConvexHullGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHullGenerator, generate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator)[] = {
          { Py_tp_methods, t_ConvexHullGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHullGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConvexHullGenerator, t_ConvexHullGenerator, ConvexHullGenerator);
        PyObject *t_ConvexHullGenerator::wrap_Object(const ConvexHullGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHullGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHullGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHullGenerator), &PY_TYPE_DEF(ConvexHullGenerator), module, "ConvexHullGenerator", 0);
        }

        void t_ConvexHullGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "class_", make_descriptor(ConvexHullGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "wrapfn_", make_descriptor(t_ConvexHullGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHullGenerator::initializeClass, 1)))
            return NULL;
          return t_ConvexHullGenerator::wrap_Object(ConvexHullGenerator(((t_ConvexHullGenerator *) arg)->object.this$));
        }
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHullGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::hull::ConvexHull result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.generate(a0));
            return ::org::hipparchus::geometry::hull::t_ConvexHull::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "generate", arg);
          return NULL;
        }
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EnablingPredicate::class$ = NULL;
        jmethodID *EnablingPredicate::mids$ = NULL;
        bool EnablingPredicate::live$ = false;

        jclass EnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_8c5eb47902e17a6d] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean EnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_8c5eb47902e17a6d], a0.this$, a1.this$, a2);
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
        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args);

        static PyMethodDef t_EnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_EnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnablingPredicate)[] = {
          { Py_tp_methods, t_EnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnablingPredicate, t_EnablingPredicate, EnablingPredicate);

        void t_EnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(EnablingPredicate), &PY_TYPE_DEF(EnablingPredicate), module, "EnablingPredicate", 0);
        }

        void t_EnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "class_", make_descriptor(EnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "wrapfn_", make_descriptor(t_EnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_EnablingPredicate::wrap_Object(EnablingPredicate(((t_EnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *SourceTable::class$ = NULL;
          jmethodID *SourceTable::mids$ = NULL;
          bool SourceTable::live$ = false;

          jclass SourceTable::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/SourceTable");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCasters_a6156df500549a58] = env->getMethodID(cls, "getCasters", "()Ljava/util/List;");
              mids$[mid_getDataStreams_a6156df500549a58] = env->getMethodID(cls, "getDataStreams", "()Ljava/util/List;");
              mids$[mid_getNetworks_a6156df500549a58] = env->getMethodID(cls, "getNetworks", "()Ljava/util/List;");
              mids$[mid_getNtripFlags_0090f7797e403f43] = env->getMethodID(cls, "getNtripFlags", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List SourceTable::getCasters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCasters_a6156df500549a58]));
          }

          ::java::util::List SourceTable::getDataStreams() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataStreams_a6156df500549a58]));
          }

          ::java::util::List SourceTable::getNetworks() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNetworks_a6156df500549a58]));
          }

          ::java::lang::String SourceTable::getNtripFlags() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNtripFlags_0090f7797e403f43]));
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
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_getCasters(t_SourceTable *self);
          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self);
          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self);
          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self);
          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data);
          static PyGetSetDef t_SourceTable__fields_[] = {
            DECLARE_GET_FIELD(t_SourceTable, casters),
            DECLARE_GET_FIELD(t_SourceTable, dataStreams),
            DECLARE_GET_FIELD(t_SourceTable, networks),
            DECLARE_GET_FIELD(t_SourceTable, ntripFlags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SourceTable__methods_[] = {
            DECLARE_METHOD(t_SourceTable, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, getCasters, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getDataStreams, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNetworks, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNtripFlags, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SourceTable)[] = {
            { Py_tp_methods, t_SourceTable__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SourceTable__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SourceTable)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SourceTable, t_SourceTable, SourceTable);

          void t_SourceTable::install(PyObject *module)
          {
            installType(&PY_TYPE(SourceTable), &PY_TYPE_DEF(SourceTable), module, "SourceTable", 0);
          }

          void t_SourceTable::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "class_", make_descriptor(SourceTable::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "wrapfn_", make_descriptor(t_SourceTable::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SourceTable::initializeClass, 1)))
              return NULL;
            return t_SourceTable::wrap_Object(SourceTable(((t_SourceTable *) arg)->object.this$));
          }
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SourceTable::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SourceTable_getCasters(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(CasterRecord));
          }

          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(DataStreamRecord));
          }

          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NetworkRecord));
          }

          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNtripFlags());
            return j2p(result);
          }

          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNtripFlags());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaTurnAroundRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaTurnAroundRangeModifier::mids$ = NULL;
          bool OnBoardAntennaTurnAroundRangeModifier::live$ = false;

          jclass OnBoardAntennaTurnAroundRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a94622407b723689] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaTurnAroundRangeModifier::OnBoardAntennaTurnAroundRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a94622407b723689, a0.this$)) {}

          ::java::util::List OnBoardAntennaTurnAroundRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void OnBoardAntennaTurnAroundRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaTurnAroundRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaTurnAroundRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaTurnAroundRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaTurnAroundRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaTurnAroundRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaTurnAroundRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaTurnAroundRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaTurnAroundRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaTurnAroundRangeModifier, t_OnBoardAntennaTurnAroundRangeModifier, OnBoardAntennaTurnAroundRangeModifier);

          void t_OnBoardAntennaTurnAroundRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), &PY_TYPE_DEF(OnBoardAntennaTurnAroundRangeModifier), module, "OnBoardAntennaTurnAroundRangeModifier", 0);
          }

          void t_OnBoardAntennaTurnAroundRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "class_", make_descriptor(OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaTurnAroundRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaTurnAroundRangeModifier::wrap_Object(OnBoardAntennaTurnAroundRangeModifier(((t_OnBoardAntennaTurnAroundRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            OnBoardAntennaTurnAroundRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = OnBoardAntennaTurnAroundRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/Month.h"
#include "java/lang/Comparable.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateComponents::class$ = NULL;
      jmethodID *DateComponents::mids$ = NULL;
      bool DateComponents::live$ = false;
      DateComponents *DateComponents::BEIDOU_EPOCH = NULL;
      DateComponents *DateComponents::CCSDS_EPOCH = NULL;
      DateComponents *DateComponents::FIFTIES_EPOCH = NULL;
      DateComponents *DateComponents::GALILEO_EPOCH = NULL;
      DateComponents *DateComponents::GLONASS_EPOCH = NULL;
      DateComponents *DateComponents::GPS_EPOCH = NULL;
      DateComponents *DateComponents::IRNSS_EPOCH = NULL;
      DateComponents *DateComponents::J2000_EPOCH = NULL;
      DateComponents *DateComponents::JAVA_EPOCH = NULL;
      DateComponents *DateComponents::JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::MAX_EPOCH = NULL;
      DateComponents *DateComponents::MIN_EPOCH = NULL;
      DateComponents *DateComponents::MODIFIED_JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::QZSS_EPOCH = NULL;

      jclass DateComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f258113202d4c30d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_2bb2179709f1d894] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_c80ec2f7d8b5fe87] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_compareTo_6ebe4402e3a7e632] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateComponents;)I");
          mids$[mid_createFromWeekComponents_606eaea026b5af0b] = env->getStaticMethodID(cls, "createFromWeekComponents", "(III)Lorg/orekit/time/DateComponents;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCalendarWeek_f2f64475e4580546] = env->getMethodID(cls, "getCalendarWeek", "()I");
          mids$[mid_getDay_f2f64475e4580546] = env->getMethodID(cls, "getDay", "()I");
          mids$[mid_getDayOfWeek_f2f64475e4580546] = env->getMethodID(cls, "getDayOfWeek", "()I");
          mids$[mid_getDayOfYear_f2f64475e4580546] = env->getMethodID(cls, "getDayOfYear", "()I");
          mids$[mid_getJ2000Day_f2f64475e4580546] = env->getMethodID(cls, "getJ2000Day", "()I");
          mids$[mid_getMJD_f2f64475e4580546] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getMonth_f2f64475e4580546] = env->getMethodID(cls, "getMonth", "()I");
          mids$[mid_getMonthEnum_f0fe0217ceb36471] = env->getMethodID(cls, "getMonthEnum", "()Lorg/orekit/time/Month;");
          mids$[mid_getYear_f2f64475e4580546] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseDate_4d724b461e440432] = env->getStaticMethodID(cls, "parseDate", "(Ljava/lang/String;)Lorg/orekit/time/DateComponents;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU_EPOCH = new DateComponents(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/DateComponents;"));
          CCSDS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          FIFTIES_EPOCH = new DateComponents(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GALILEO_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GLONASS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GPS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          IRNSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          J2000_EPOCH = new DateComponents(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JAVA_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MAX_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MAX_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MIN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MIN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MODIFIED_JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          QZSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateComponents::DateComponents(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      DateComponents::DateComponents(const DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f258113202d4c30d, a0.this$, a1)) {}

      DateComponents::DateComponents(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      DateComponents::DateComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2bb2179709f1d894, a0, a1.this$, a2)) {}

      DateComponents::DateComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c80ec2f7d8b5fe87, a0, a1, a2)) {}

      jint DateComponents::compareTo(const DateComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_6ebe4402e3a7e632], a0.this$);
      }

      DateComponents DateComponents::createFromWeekComponents(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_createFromWeekComponents_606eaea026b5af0b], a0, a1, a2));
      }

      jboolean DateComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jint DateComponents::getCalendarWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getCalendarWeek_f2f64475e4580546]);
      }

      jint DateComponents::getDay() const
      {
        return env->callIntMethod(this$, mids$[mid_getDay_f2f64475e4580546]);
      }

      jint DateComponents::getDayOfWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfWeek_f2f64475e4580546]);
      }

      jint DateComponents::getDayOfYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfYear_f2f64475e4580546]);
      }

      jint DateComponents::getJ2000Day() const
      {
        return env->callIntMethod(this$, mids$[mid_getJ2000Day_f2f64475e4580546]);
      }

      jint DateComponents::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_f2f64475e4580546]);
      }

      jint DateComponents::getMonth() const
      {
        return env->callIntMethod(this$, mids$[mid_getMonth_f2f64475e4580546]);
      }

      ::org::orekit::time::Month DateComponents::getMonthEnum() const
      {
        return ::org::orekit::time::Month(env->callObjectMethod(this$, mids$[mid_getMonthEnum_f0fe0217ceb36471]));
      }

      jint DateComponents::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_f2f64475e4580546]);
      }

      jint DateComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      DateComponents DateComponents::parseDate(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDate_4d724b461e440432], a0.this$));
      }

      ::java::lang::String DateComponents::toString() const
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
    namespace time {
      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg);
      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args);
      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDay(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self);
      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self);
      static PyObject *t_DateComponents_getMJD(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonth(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self);
      static PyObject *t_DateComponents_getYear(t_DateComponents *self);
      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data);
      static PyGetSetDef t_DateComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateComponents, calendarWeek),
        DECLARE_GET_FIELD(t_DateComponents, day),
        DECLARE_GET_FIELD(t_DateComponents, dayOfWeek),
        DECLARE_GET_FIELD(t_DateComponents, dayOfYear),
        DECLARE_GET_FIELD(t_DateComponents, j2000Day),
        DECLARE_GET_FIELD(t_DateComponents, mJD),
        DECLARE_GET_FIELD(t_DateComponents, month),
        DECLARE_GET_FIELD(t_DateComponents, monthEnum),
        DECLARE_GET_FIELD(t_DateComponents, year),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateComponents__methods_[] = {
        DECLARE_METHOD(t_DateComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateComponents, createFromWeekComponents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, getCalendarWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDay, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getJ2000Day, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonth, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonthEnum, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, parseDate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateComponents)[] = {
        { Py_tp_methods, t_DateComponents__methods_ },
        { Py_tp_init, (void *) t_DateComponents_init_ },
        { Py_tp_getset, t_DateComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateComponents, t_DateComponents, DateComponents);

      void t_DateComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateComponents), &PY_TYPE_DEF(DateComponents), module, "DateComponents", 0);
      }

      void t_DateComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "class_", make_descriptor(DateComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "wrapfn_", make_descriptor(t_DateComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "BEIDOU_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "CCSDS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "FIFTIES_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GALILEO_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GLONASS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GPS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "IRNSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "J2000_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JAVA_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MAX_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MAX_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MIN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MIN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "QZSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::QZSS_EPOCH)));
      }

      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateComponents::initializeClass, 1)))
          return NULL;
        return t_DateComponents::wrap_Object(DateComponents(((t_DateComponents *) arg)->object.this$));
      }
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DateComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            DateComponents a0((jobject) NULL);
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "kI", DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
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

      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg)
      {
        DateComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        DateComponents result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::createFromWeekComponents(a0, a1, a2));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromWeekComponents", args);
        return NULL;
      }

      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCalendarWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDay(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDay());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getJ2000Day());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMJD(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonth(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMonth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self)
      {
        ::org::orekit::time::Month result((jobject) NULL);
        OBJ_CALL(result = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(result);
      }

      static PyObject *t_DateComponents_getYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::parseDate(a0));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDate", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCalendarWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDay());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfYear());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getJ2000Day());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMonth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data)
      {
        ::org::orekit::time::Month value((jobject) NULL);
        OBJ_CALL(value = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(value);
      }

      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$OrderDirection::class$ = NULL;
      jmethodID *MathArrays$OrderDirection::mids$ = NULL;
      bool MathArrays$OrderDirection::live$ = false;
      MathArrays$OrderDirection *MathArrays$OrderDirection::DECREASING = NULL;
      MathArrays$OrderDirection *MathArrays$OrderDirection::INCREASING = NULL;

      jclass MathArrays$OrderDirection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$OrderDirection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_f58be7a184000b98] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$OrderDirection;");
          mids$[mid_values_d21d16812b1a9675] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$OrderDirection;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DECREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "DECREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          INCREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "INCREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$OrderDirection MathArrays$OrderDirection::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$OrderDirection(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f58be7a184000b98], a0.this$));
      }

      JArray< MathArrays$OrderDirection > MathArrays$OrderDirection::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$OrderDirection >(env->callStaticObjectMethod(cls, mids$[mid_values_d21d16812b1a9675]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type);
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data);
      static PyGetSetDef t_MathArrays$OrderDirection__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$OrderDirection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$OrderDirection__methods_[] = {
        DECLARE_METHOD(t_MathArrays$OrderDirection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$OrderDirection)[] = {
        { Py_tp_methods, t_MathArrays$OrderDirection__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$OrderDirection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$OrderDirection)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$OrderDirection, t_MathArrays$OrderDirection, MathArrays$OrderDirection);
      PyObject *t_MathArrays$OrderDirection::wrap_Object(const MathArrays$OrderDirection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$OrderDirection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$OrderDirection::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$OrderDirection), &PY_TYPE_DEF(MathArrays$OrderDirection), module, "MathArrays$OrderDirection", 0);
      }

      void t_MathArrays$OrderDirection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "class_", make_descriptor(MathArrays$OrderDirection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "wrapfn_", make_descriptor(t_MathArrays$OrderDirection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$OrderDirection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "DECREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::DECREASING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "INCREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::INCREASING)));
      }

      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$OrderDirection::initializeClass, 1)))
          return NULL;
        return t_MathArrays$OrderDirection::wrap_Object(MathArrays$OrderDirection(((t_MathArrays$OrderDirection *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$OrderDirection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$OrderDirection result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::valueOf(a0));
          return t_MathArrays$OrderDirection::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type)
      {
        JArray< MathArrays$OrderDirection > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$OrderDirection::wrap_jobject);
      }
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {

          ::java::lang::Class *RinexFileType::class$ = NULL;
          jmethodID *RinexFileType::mids$ = NULL;
          bool RinexFileType::live$ = false;
          RinexFileType *RinexFileType::NAVIGATION = NULL;
          RinexFileType *RinexFileType::OBSERVATION = NULL;

          jclass RinexFileType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/RinexFileType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseRinexFileType_733739b8a532aff8] = env->getStaticMethodID(cls, "parseRinexFileType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_valueOf_733739b8a532aff8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_values_23813c9139438f11] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/utils/RinexFileType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NAVIGATION = new RinexFileType(env->getStaticObjectField(cls, "NAVIGATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              OBSERVATION = new RinexFileType(env->getStaticObjectField(cls, "OBSERVATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexFileType RinexFileType::parseRinexFileType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_parseRinexFileType_733739b8a532aff8], a0.this$));
          }

          RinexFileType RinexFileType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_733739b8a532aff8], a0.this$));
          }

          JArray< RinexFileType > RinexFileType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexFileType >(env->callStaticObjectMethod(cls, mids$[mid_values_23813c9139438f11]));
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
        namespace utils {
          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args);
          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexFileType_values(PyTypeObject *type);
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data);
          static PyGetSetDef t_RinexFileType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexFileType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexFileType__methods_[] = {
            DECLARE_METHOD(t_RinexFileType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexFileType, parseRinexFileType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexFileType)[] = {
            { Py_tp_methods, t_RinexFileType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexFileType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexFileType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexFileType, t_RinexFileType, RinexFileType);
          PyObject *t_RinexFileType::wrap_Object(const RinexFileType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexFileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexFileType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexFileType), &PY_TYPE_DEF(RinexFileType), module, "RinexFileType", 0);
          }

          void t_RinexFileType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "class_", make_descriptor(RinexFileType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "wrapfn_", make_descriptor(t_RinexFileType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexFileType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "NAVIGATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::NAVIGATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "OBSERVATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::OBSERVATION)));
          }

          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexFileType::initializeClass, 1)))
              return NULL;
            return t_RinexFileType::wrap_Object(RinexFileType(((t_RinexFileType *) arg)->object.this$));
          }
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexFileType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::parseRinexFileType(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseRinexFileType", arg);
            return NULL;
          }

          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::valueOf(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexFileType_values(PyTypeObject *type)
          {
            JArray< RinexFileType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexFileType::wrap_jobject);
          }
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeSystem::class$ = NULL;
          jmethodID *TimeSystem::mids$ = NULL;
          bool TimeSystem::live$ = false;
          TimeSystem *TimeSystem::GMST = NULL;
          TimeSystem *TimeSystem::GPS = NULL;
          TimeSystem *TimeSystem::MET = NULL;
          TimeSystem *TimeSystem::MRT = NULL;
          TimeSystem *TimeSystem::SCLK = NULL;
          TimeSystem *TimeSystem::TAI = NULL;
          TimeSystem *TimeSystem::TCB = NULL;
          TimeSystem *TimeSystem::TCG = NULL;
          TimeSystem *TimeSystem::TDB = NULL;
          TimeSystem *TimeSystem::TT = NULL;
          TimeSystem *TimeSystem::UT1 = NULL;
          TimeSystem *TimeSystem::UTC = NULL;

          jclass TimeSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConverter_b8995fcca635d467] = env->getMethodID(cls, "getConverter", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)Lorg/orekit/files/ccsds/definitions/TimeConverter;");
              mids$[mid_parse_fa88e9840d34f3e2] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_valueOf_fa88e9840d34f3e2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_values_2dfeb0e284ed5b9e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/TimeSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GMST = new TimeSystem(env->getStaticObjectField(cls, "GMST", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MET = new TimeSystem(env->getStaticObjectField(cls, "MET", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MRT = new TimeSystem(env->getStaticObjectField(cls, "MRT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              SCLK = new TimeSystem(env->getStaticObjectField(cls, "SCLK", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCB = new TimeSystem(env->getStaticObjectField(cls, "TCB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCG = new TimeSystem(env->getStaticObjectField(cls, "TCG", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TDB = new TimeSystem(env->getStaticObjectField(cls, "TDB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TT = new TimeSystem(env->getStaticObjectField(cls, "TT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UT1 = new TimeSystem(env->getStaticObjectField(cls, "UT1", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeConverter TimeSystem::getConverter(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
          {
            return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getConverter_b8995fcca635d467], a0.this$));
          }

          TimeSystem TimeSystem::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_fa88e9840d34f3e2], a0.this$));
          }

          TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fa88e9840d34f3e2], a0.this$));
          }

          JArray< TimeSystem > TimeSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_2dfeb0e284ed5b9e]));
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
        namespace definitions {
          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg);
          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TimeSystem_values(PyTypeObject *type);
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
          static PyGetSetDef t_TimeSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystem__methods_[] = {
            DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TimeSystem, getConverter, METH_O),
            DECLARE_METHOD(t_TimeSystem, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
            { Py_tp_methods, t_TimeSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TimeSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
          PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TimeSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
          }

          void t_TimeSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMST", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MET", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MRT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MRT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SCLK", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SCLK)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCG", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TDB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TDB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UT1", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UT1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
          }

          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
              return NULL;
            return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
          }
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getConverter(a0));
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConverter", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::parse(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::valueOf(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TimeSystem_values(PyTypeObject *type)
          {
            JArray< TimeSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
          }
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
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
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *PolynomialCurveFitter::class$ = NULL;
      jmethodID *PolynomialCurveFitter::mids$ = NULL;
      bool PolynomialCurveFitter::live$ = false;

      jclass PolynomialCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/PolynomialCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_8ac5985a7b4e822a] = env->getStaticMethodID(cls, "create", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withMaxIterations_8ac5985a7b4e822a] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withStartPoint_64921603ee6b99cc] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_getProblem_23a9c25631fa37c2] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialCurveFitter PolynomialCurveFitter::create(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_8ac5985a7b4e822a], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withMaxIterations(jint a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_8ac5985a7b4e822a], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_64921603ee6b99cc], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg);

      static PyMethodDef t_PolynomialCurveFitter__methods_[] = {
        DECLARE_METHOD(t_PolynomialCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_PolynomialCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialCurveFitter)[] = {
        { Py_tp_methods, t_PolynomialCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(PolynomialCurveFitter, t_PolynomialCurveFitter, PolynomialCurveFitter);

      void t_PolynomialCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialCurveFitter), &PY_TYPE_DEF(PolynomialCurveFitter), module, "PolynomialCurveFitter", 0);
      }

      void t_PolynomialCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "class_", make_descriptor(PolynomialCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "wrapfn_", make_descriptor(t_PolynomialCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialCurveFitter::initializeClass, 1)))
          return NULL;
        return t_PolynomialCurveFitter::wrap_Object(PolynomialCurveFitter(((t_PolynomialCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::PolynomialCurveFitter::create(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *CorrectionApplied::class$ = NULL;
            jmethodID *CorrectionApplied::mids$ = NULL;
            bool CorrectionApplied::live$ = false;
            CorrectionApplied *CorrectionApplied::NO = NULL;
            CorrectionApplied *CorrectionApplied::YES = NULL;

            jclass CorrectionApplied::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/CorrectionApplied");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_5860dad88a3974af] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_values_81093ff8026ebe5f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new CorrectionApplied(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                YES = new CorrectionApplied(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CorrectionApplied CorrectionApplied::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CorrectionApplied(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5860dad88a3974af], a0.this$));
            }

            JArray< CorrectionApplied > CorrectionApplied::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CorrectionApplied >(env->callStaticObjectMethod(cls, mids$[mid_values_81093ff8026ebe5f]));
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
            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args);
            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CorrectionApplied_values(PyTypeObject *type);
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data);
            static PyGetSetDef t_CorrectionApplied__fields_[] = {
              DECLARE_GET_FIELD(t_CorrectionApplied, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CorrectionApplied__methods_[] = {
              DECLARE_METHOD(t_CorrectionApplied, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, of_, METH_VARARGS),
              DECLARE_METHOD(t_CorrectionApplied, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CorrectionApplied)[] = {
              { Py_tp_methods, t_CorrectionApplied__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CorrectionApplied__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CorrectionApplied)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CorrectionApplied, t_CorrectionApplied, CorrectionApplied);
            PyObject *t_CorrectionApplied::wrap_Object(const CorrectionApplied& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CorrectionApplied::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CorrectionApplied::install(PyObject *module)
            {
              installType(&PY_TYPE(CorrectionApplied), &PY_TYPE_DEF(CorrectionApplied), module, "CorrectionApplied", 0);
            }

            void t_CorrectionApplied::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "class_", make_descriptor(CorrectionApplied::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "wrapfn_", make_descriptor(t_CorrectionApplied::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "boxfn_", make_descriptor(boxObject));
              env->getClass(CorrectionApplied::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "NO", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "YES", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::YES)));
            }

            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CorrectionApplied::initializeClass, 1)))
                return NULL;
              return t_CorrectionApplied::wrap_Object(CorrectionApplied(((t_CorrectionApplied *) arg)->object.this$));
            }
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CorrectionApplied::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CorrectionApplied result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::valueOf(a0));
                return t_CorrectionApplied::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CorrectionApplied_values(PyTypeObject *type)
            {
              JArray< CorrectionApplied > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::values());
              return JArray<jobject>(result.this$).wrap(t_CorrectionApplied::wrap_jobject);
            }
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/MidpointFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointFieldIntegrator::class$ = NULL;
        jmethodID *MidpointFieldIntegrator::mids$ = NULL;
        bool MidpointFieldIntegrator::live$ = false;

        jclass MidpointFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_15e7459be7ec40d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_d57081eb0308c0cd] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegrator::MidpointFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_15e7459be7ec40d8, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > MidpointFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args);
        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, c),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegrator)[] = {
          { Py_tp_methods, t_MidpointFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegrator_init_ },
          { Py_tp_getset, t_MidpointFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegrator, t_MidpointFieldIntegrator, MidpointFieldIntegrator);
        PyObject *t_MidpointFieldIntegrator::wrap_Object(const MidpointFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegrator), &PY_TYPE_DEF(MidpointFieldIntegrator), module, "MidpointFieldIntegrator", 0);
        }

        void t_MidpointFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "class_", make_descriptor(MidpointFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "wrapfn_", make_descriptor(t_MidpointFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegrator::wrap_Object(MidpointFieldIntegrator(((t_MidpointFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          MidpointFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = MidpointFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Sum::class$ = NULL;
          jmethodID *Sum::mids$ = NULL;
          bool Sum::live$ = false;

          jclass Sum::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Sum");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_25d5c59e3f447083] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Sum;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_1b7c02fe1f7afbd8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Sum;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_5d62632feda90f27] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sum::Sum() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void Sum::aggregate(const Sum & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_25d5c59e3f447083], a0.this$);
          }

          void Sum::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Sum Sum::copy() const
          {
            return Sum(env->callObjectMethod(this$, mids$[mid_copy_1b7c02fe1f7afbd8]));
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_5d62632feda90f27], a0.this$, a1.this$, a2, a3);
          }

          jlong Sum::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Sum::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Sum::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg);
          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_get__n(t_Sum *self, void *data);
          static PyObject *t_Sum_get__result(t_Sum *self, void *data);
          static PyGetSetDef t_Sum__fields_[] = {
            DECLARE_GET_FIELD(t_Sum, n),
            DECLARE_GET_FIELD(t_Sum, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sum__methods_[] = {
            DECLARE_METHOD(t_Sum, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, aggregate, METH_O),
            DECLARE_METHOD(t_Sum, clear, METH_VARARGS),
            DECLARE_METHOD(t_Sum, copy, METH_VARARGS),
            DECLARE_METHOD(t_Sum, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getN, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Sum, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sum)[] = {
            { Py_tp_methods, t_Sum__methods_ },
            { Py_tp_init, (void *) t_Sum_init_ },
            { Py_tp_getset, t_Sum__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sum)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Sum, t_Sum, Sum);

          void t_Sum::install(PyObject *module)
          {
            installType(&PY_TYPE(Sum), &PY_TYPE_DEF(Sum), module, "Sum", 0);
          }

          void t_Sum::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "class_", make_descriptor(Sum::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "wrapfn_", make_descriptor(t_Sum::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sum::initializeClass, 1)))
              return NULL;
            return t_Sum::wrap_Object(Sum(((t_Sum *) arg)->object.this$));
          }
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sum::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds)
          {
            Sum object((jobject) NULL);

            INT_CALL(object = Sum());
            self->object = object;

            return 0;
          }

          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg)
          {
            Sum a0((jobject) NULL);

            if (!parseArg(arg, "k", Sum::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args)
          {
            Sum result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Sum::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Sum_get__n(t_Sum *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Sum_get__result(t_Sum *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$SumAndResidual::class$ = NULL;
      jmethodID *MathUtils$SumAndResidual::mids$ = NULL;
      bool MathUtils$SumAndResidual::live$ = false;

      jclass MathUtils$SumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$SumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_456d9a2f64d6b28d] = env->getMethodID(cls, "getResidual", "()D");
          mids$[mid_getSum_456d9a2f64d6b28d] = env->getMethodID(cls, "getSum", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathUtils$SumAndResidual::getResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getResidual_456d9a2f64d6b28d]);
      }

      jdouble MathUtils$SumAndResidual::getSum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSum_456d9a2f64d6b28d]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data);
      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$SumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, sum),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$SumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$SumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$SumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$SumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$SumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$SumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$SumAndResidual, t_MathUtils$SumAndResidual, MathUtils$SumAndResidual);

      void t_MathUtils$SumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$SumAndResidual), &PY_TYPE_DEF(MathUtils$SumAndResidual), module, "MathUtils$SumAndResidual", 0);
      }

      void t_MathUtils$SumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "class_", make_descriptor(MathUtils$SumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$SumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$SumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$SumAndResidual::wrap_Object(MathUtils$SumAndResidual(((t_MathUtils$SumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$SumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSum());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/Bias.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *Bias::class$ = NULL;
          jmethodID *Bias::mids$ = NULL;
          bool Bias::live$ = false;

          jclass Bias::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/Bias");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fcbe3c3a057c1f8a] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;[D[D[D[D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Bias::Bias(const JArray< ::java::lang::String > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcbe3c3a057c1f8a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::java::util::List Bias::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void Bias::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void Bias::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args);
          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Bias_getParametersDrivers(t_Bias *self);
          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data);
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data);
          static PyGetSetDef t_Bias__fields_[] = {
            DECLARE_GET_FIELD(t_Bias, parametersDrivers),
            DECLARE_GET_FIELD(t_Bias, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Bias__methods_[] = {
            DECLARE_METHOD(t_Bias, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, of_, METH_VARARGS),
            DECLARE_METHOD(t_Bias, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_Bias, modify, METH_O),
            DECLARE_METHOD(t_Bias, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Bias)[] = {
            { Py_tp_methods, t_Bias__methods_ },
            { Py_tp_init, (void *) t_Bias_init_ },
            { Py_tp_getset, t_Bias__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Bias)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Bias, t_Bias, Bias);
          PyObject *t_Bias::wrap_Object(const Bias& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Bias::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Bias::install(PyObject *module)
          {
            installType(&PY_TYPE(Bias), &PY_TYPE_DEF(Bias), module, "Bias", 0);
          }

          void t_Bias::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "class_", make_descriptor(Bias::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "wrapfn_", make_descriptor(t_Bias::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Bias::initializeClass, 1)))
              return NULL;
            return t_Bias::wrap_Object(Bias(((t_Bias *) arg)->object.this$));
          }
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Bias::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds)
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            Bias object((jobject) NULL);

            if (!parseArgs(args, "[s[D[D[D[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Bias(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Bias_getParametersDrivers(t_Bias *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/ECOM2.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *ECOM2::class$ = NULL;
        jmethodID *ECOM2::mids$ = NULL;
        bool ECOM2::live$ = false;
        ::java::lang::String *ECOM2::ECOM_COEFFICIENT = NULL;

        jclass ECOM2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/ECOM2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_60a87c8270cc0379] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ECOM_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ECOM_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ECOM2::ECOM2(jint a0, jint a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_60a87c8270cc0379, a0, a1, a2, a3.this$, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ECOM2::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ECOM2::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::java::util::List ECOM2::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
      namespace radiation {
        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data);
        static PyGetSetDef t_ECOM2__fields_[] = {
          DECLARE_GET_FIELD(t_ECOM2, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ECOM2__methods_[] = {
          DECLARE_METHOD(t_ECOM2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ECOM2, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ECOM2)[] = {
          { Py_tp_methods, t_ECOM2__methods_ },
          { Py_tp_init, (void *) t_ECOM2_init_ },
          { Py_tp_getset, t_ECOM2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ECOM2)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(ECOM2, t_ECOM2, ECOM2);

        void t_ECOM2::install(PyObject *module)
        {
          installType(&PY_TYPE(ECOM2), &PY_TYPE_DEF(ECOM2), module, "ECOM2", 0);
        }

        void t_ECOM2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "class_", make_descriptor(ECOM2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "wrapfn_", make_descriptor(t_ECOM2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "boxfn_", make_descriptor(boxObject));
          env->getClass(ECOM2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "ECOM_COEFFICIENT", make_descriptor(j2p(*ECOM2::ECOM_COEFFICIENT)));
        }

        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ECOM2::initializeClass, 1)))
            return NULL;
          return t_ECOM2::wrap_Object(ECOM2(((t_ECOM2 *) arg)->object.this$));
        }
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ECOM2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          jdouble a4;
          ECOM2 object((jobject) NULL);

          if (!parseArgs(args, "IIDkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ECOM2(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericModel::class$ = NULL;
          jmethodID *PythonIonosphericModel::mids$ = NULL;
          bool PythonIonosphericModel::live$ = false;

          jclass PythonIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_7cdc325af0834901] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_62f3dd52a41b90da] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_c824fdb3e595a2ae] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_78d4f8498e981bf5] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericModel::PythonIonosphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonIonosphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonIonosphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonIonosphericModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self);
          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data);
          static PyGetSetDef t_PythonIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericModel)[] = {
            { Py_tp_methods, t_PythonIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericModel_init_ },
            { Py_tp_getset, t_PythonIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericModel, t_PythonIonosphericModel, PythonIonosphericModel);

          void t_PythonIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericModel), &PY_TYPE_DEF(PythonIonosphericModel), module, "PythonIonosphericModel", 1);
          }

          void t_PythonIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "class_", make_descriptor(PythonIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "wrapfn_", make_descriptor(t_PythonIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonIonosphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIonosphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_pathDelay3 },
              { "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D", (void *) t_PythonIonosphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericModel::wrap_Object(PythonIonosphericModel(((t_PythonIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericModel object((jobject) NULL);

            INT_CALL(object = PythonIonosphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jdouble>(a3).wrap();
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *Covariance::class$ = NULL;
        jmethodID *Covariance::mids$ = NULL;
        bool Covariance::live$ = false;

        jclass Covariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/Covariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_7911f39d20980098] = env->getMethodID(cls, "<init>", "([[DZ)V");
            mids$[mid_init$_ac2ccfc5e69fe598] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Z)V");
            mids$[mid_covariance_1ce76fb6ff382da9] = env->getMethodID(cls, "covariance", "([D[D)D");
            mids$[mid_covariance_6379f5334de861c2] = env->getMethodID(cls, "covariance", "([D[DZ)D");
            mids$[mid_getCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getN_f2f64475e4580546] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_computeCovarianceMatrix_e00cd33aedcc5bd0] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_12b5b63b950f79d6] = env->getMethodID(cls, "computeCovarianceMatrix", "([[DZ)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_d983e368b64b23a3] = env->getMethodID(cls, "computeCovarianceMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_c3d4a5038e1551c4] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Z)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Covariance::Covariance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7911f39d20980098, a0.this$, a1)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac2ccfc5e69fe598, a0.this$, a1)) {}

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_6379f5334de861c2], a0.this$, a1.this$, a2);
        }

        ::org::hipparchus::linear::RealMatrix Covariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_7116bbecdd8ceb21]));
        }

        jint Covariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_f2f64475e4580546]);
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
      namespace correlation {
        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args);
        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self);
        static PyObject *t_Covariance_getN(t_Covariance *self);
        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data);
        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data);
        static PyGetSetDef t_Covariance__fields_[] = {
          DECLARE_GET_FIELD(t_Covariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_Covariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Covariance__methods_[] = {
          DECLARE_METHOD(t_Covariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, covariance, METH_VARARGS),
          DECLARE_METHOD(t_Covariance, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Covariance, getN, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Covariance)[] = {
          { Py_tp_methods, t_Covariance__methods_ },
          { Py_tp_init, (void *) t_Covariance_init_ },
          { Py_tp_getset, t_Covariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Covariance)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Covariance, t_Covariance, Covariance);

        void t_Covariance::install(PyObject *module)
        {
          installType(&PY_TYPE(Covariance), &PY_TYPE_DEF(Covariance), module, "Covariance", 0);
        }

        void t_Covariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "class_", make_descriptor(Covariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "wrapfn_", make_descriptor(t_Covariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Covariance::initializeClass, 1)))
            return NULL;
          return t_Covariance::wrap_Object(Covariance(((t_Covariance *) arg)->object.this$));
        }
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Covariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Covariance object((jobject) NULL);

              INT_CALL(object = Covariance());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[DZ", &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "kZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
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

        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "covariance", args);
          return NULL;
        }

        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Covariance_getN(t_Covariance *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/StopOnEvent.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnEvent::class$ = NULL;
          jmethodID *StopOnEvent::mids$ = NULL;
          bool StopOnEvent::live$ = false;

          jclass StopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnEvent::StopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action StopOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66531e3c1769dca9], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_StopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnEvent_init_(t_StopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnEvent_eventOccurred(t_StopOnEvent *self, PyObject *args);

          static PyMethodDef t_StopOnEvent__methods_[] = {
            DECLARE_METHOD(t_StopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnEvent)[] = {
            { Py_tp_methods, t_StopOnEvent__methods_ },
            { Py_tp_init, (void *) t_StopOnEvent_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnEvent, t_StopOnEvent, StopOnEvent);

          void t_StopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnEvent), &PY_TYPE_DEF(StopOnEvent), module, "StopOnEvent", 0);
          }

          void t_StopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "class_", make_descriptor(StopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "wrapfn_", make_descriptor(t_StopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnEvent::initializeClass, 1)))
              return NULL;
            return t_StopOnEvent::wrap_Object(StopOnEvent(((t_StopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_StopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnEvent_init_(t_StopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            StopOnEvent object((jobject) NULL);

            INT_CALL(object = StopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnEvent_eventOccurred(t_StopOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *ReferenceEllipsoid::class$ = NULL;
        jmethodID *ReferenceEllipsoid::mids$ = NULL;
        bool ReferenceEllipsoid::live$ = false;

        jclass ReferenceEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/ReferenceEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_399d4188d42db9c4] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;DD)V");
            mids$[mid_getC2n0_b772323fc98b7293] = env->getMethodID(cls, "getC2n0", "(I)D");
            mids$[mid_getEllipsoid_1eef7b7a6c58a550] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getGM_456d9a2f64d6b28d] = env->getMethodID(cls, "getGM", "()D");
            mids$[mid_getGrs80_4b9f1016b44a7fb1] = env->getStaticMethodID(cls, "getGrs80", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2003_4b9f1016b44a7fb1] = env->getStaticMethodID(cls, "getIers2003", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2010_4b9f1016b44a7fb1] = env->getStaticMethodID(cls, "getIers2010", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers96_4b9f1016b44a7fb1] = env->getStaticMethodID(cls, "getIers96", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getNormalGravity_0ba5fed9597b693e] = env->getMethodID(cls, "getNormalGravity", "(D)D");
            mids$[mid_getPolarRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getPolarRadius", "()D");
            mids$[mid_getSpin_456d9a2f64d6b28d] = env->getMethodID(cls, "getSpin", "()D");
            mids$[mid_getWgs84_4b9f1016b44a7fb1] = env->getStaticMethodID(cls, "getWgs84", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReferenceEllipsoid::ReferenceEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jdouble a3, jdouble a4) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_399d4188d42db9c4, a0, a1, a2.this$, a3, a4)) {}

        jdouble ReferenceEllipsoid::getC2n0(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getC2n0_b772323fc98b7293], a0);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getEllipsoid() const
        {
          return ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_1eef7b7a6c58a550]));
        }

        jdouble ReferenceEllipsoid::getGM() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGM_456d9a2f64d6b28d]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getGrs80(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getGrs80_4b9f1016b44a7fb1], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2003(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2003_4b9f1016b44a7fb1], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2010(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2010_4b9f1016b44a7fb1], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers96(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers96_4b9f1016b44a7fb1], a0.this$));
        }

        jdouble ReferenceEllipsoid::getNormalGravity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNormalGravity_0ba5fed9597b693e], a0);
        }

        jdouble ReferenceEllipsoid::getPolarRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPolarRadius_456d9a2f64d6b28d]);
        }

        jdouble ReferenceEllipsoid::getSpin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpin_456d9a2f64d6b28d]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getWgs84(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getWgs84_4b9f1016b44a7fb1], a0.this$));
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
    namespace models {
      namespace earth {
        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data);
        static PyGetSetDef t_ReferenceEllipsoid__fields_[] = {
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, ellipsoid),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, gM),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, polarRadius),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, spin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReferenceEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ReferenceEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getC2n0, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGM, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGrs80, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2003, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2010, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers96, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getNormalGravity, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getPolarRadius, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getSpin, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getWgs84, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReferenceEllipsoid)[] = {
          { Py_tp_methods, t_ReferenceEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ReferenceEllipsoid_init_ },
          { Py_tp_getset, t_ReferenceEllipsoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReferenceEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ReferenceEllipsoid, t_ReferenceEllipsoid, ReferenceEllipsoid);

        void t_ReferenceEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ReferenceEllipsoid), &PY_TYPE_DEF(ReferenceEllipsoid), module, "ReferenceEllipsoid", 0);
        }

        void t_ReferenceEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "class_", make_descriptor(ReferenceEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "wrapfn_", make_descriptor(t_ReferenceEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReferenceEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ReferenceEllipsoid::wrap_Object(ReferenceEllipsoid(((t_ReferenceEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReferenceEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          ReferenceEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDkDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ReferenceEllipsoid(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getC2n0(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getC2n0", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self)
        {
          ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGM());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getGrs80(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGrs80", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2003(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2003", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2010(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2010", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers96(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers96", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getNormalGravity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getNormalGravity", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getWgs84(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWgs84", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data)
        {
          ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(value);
        }

        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGM());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
