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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_configureCorrectionGrid_6998202d78aaf9b3] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_getDefaultInverseLocMargin_b74f83833fdad017] = env->getMethodID(cls, "getDefaultInverseLocMargin", "()D");
            mids$[mid_getInverseLocMargin_b74f83833fdad017] = env->getMethodID(cls, "getInverseLocMargin", "()D");
            mids$[mid_getMaxLineSensor_b74f83833fdad017] = env->getMethodID(cls, "getMaxLineSensor", "()D");
            mids$[mid_getMinLineSensor_b74f83833fdad017] = env->getMethodID(cls, "getMinLineSensor", "()D");
            mids$[mid_getNbLineGrid_55546ef6a647f39b] = env->getMethodID(cls, "getNbLineGrid", "()I");
            mids$[mid_getNbPixelGrid_55546ef6a647f39b] = env->getMethodID(cls, "getNbPixelGrid", "()I");
            mids$[mid_getSensorName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");
            mids$[mid_getUgrid_25e1757a36c4dde2] = env->getMethodID(cls, "getUgrid", "()[D");
            mids$[mid_getVgrid_25e1757a36c4dde2] = env->getMethodID(cls, "getVgrid", "()[D");
            mids$[mid_setGridSteps_3313c75e3e16c428] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_8ba9fe7a847cecad] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AtmosphericComputationParameters::AtmosphericComputationParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void AtmosphericComputationParameters::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_6998202d78aaf9b3], a0.this$, a1, a2);
        }

        jdouble AtmosphericComputationParameters::getDefaultInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultInverseLocMargin_b74f83833fdad017]);
        }

        jdouble AtmosphericComputationParameters::getInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInverseLocMargin_b74f83833fdad017]);
        }

        jdouble AtmosphericComputationParameters::getMaxLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxLineSensor_b74f83833fdad017]);
        }

        jdouble AtmosphericComputationParameters::getMinLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinLineSensor_b74f83833fdad017]);
        }

        jint AtmosphericComputationParameters::getNbLineGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbLineGrid_55546ef6a647f39b]);
        }

        jint AtmosphericComputationParameters::getNbPixelGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixelGrid_55546ef6a647f39b]);
        }

        ::java::lang::String AtmosphericComputationParameters::getSensorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_1c1fa1e935d6cdcf]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getUgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUgrid_25e1757a36c4dde2]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getVgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVgrid_25e1757a36c4dde2]));
        }

        void AtmosphericComputationParameters::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_3313c75e3e16c428], a0, a1);
        }

        void AtmosphericComputationParameters::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_8ba9fe7a847cecad], a0);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Data::class$ = NULL;
              jmethodID *SsrIgm01Data::mids$ = NULL;
              bool SsrIgm01Data::live$ = false;

              jclass SsrIgm01Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_55546ef6a647f39b] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_da9c9656f83ca27e] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_44ed599e93e8a30c] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_b2cd6b761acba879] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Data::SsrIgm01Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint SsrIgm01Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_55546ef6a647f39b]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm01Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_da9c9656f83ca27e]));
              }

              void SsrIgm01Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_44ed599e93e8a30c], a0);
              }

              void SsrIgm01Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_b2cd6b761acba879], a0.this$);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm01Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Data)[] = {
                { Py_tp_methods, t_SsrIgm01Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Data_init_ },
                { Py_tp_getset, t_SsrIgm01Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Data, t_SsrIgm01Data, SsrIgm01Data);

              void t_SsrIgm01Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Data), &PY_TYPE_DEF(SsrIgm01Data), module, "SsrIgm01Data", 0);
              }

              void t_SsrIgm01Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "class_", make_descriptor(SsrIgm01Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "wrapfn_", make_descriptor(t_SsrIgm01Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Data::wrap_Object(SsrIgm01Data(((t_SsrIgm01Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Data object((jobject) NULL);

                INT_CALL(object = SsrIgm01Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/hipparchus/stat/interval/BinomialProportion.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *BinomialProportion::class$ = NULL;
        jmethodID *BinomialProportion::mids$ = NULL;
        bool BinomialProportion::live$ = false;

        jclass BinomialProportion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/BinomialProportion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAgrestiCoullInterval_8296721c4042ec10] = env->getStaticMethodID(cls, "getAgrestiCoullInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getClopperPearsonInterval_8296721c4042ec10] = env->getStaticMethodID(cls, "getClopperPearsonInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getNormalApproximationInterval_8296721c4042ec10] = env->getStaticMethodID(cls, "getNormalApproximationInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getWilsonScoreInterval_8296721c4042ec10] = env->getStaticMethodID(cls, "getWilsonScoreInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getAgrestiCoullInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getAgrestiCoullInterval_8296721c4042ec10], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getClopperPearsonInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getClopperPearsonInterval_8296721c4042ec10], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getNormalApproximationInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getNormalApproximationInterval_8296721c4042ec10], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getWilsonScoreInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getWilsonScoreInterval_8296721c4042ec10], a0, a1, a2));
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
      namespace interval {
        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_BinomialProportion__methods_[] = {
          DECLARE_METHOD(t_BinomialProportion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getAgrestiCoullInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getClopperPearsonInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getNormalApproximationInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getWilsonScoreInterval, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialProportion)[] = {
          { Py_tp_methods, t_BinomialProportion__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialProportion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialProportion, t_BinomialProportion, BinomialProportion);

        void t_BinomialProportion::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialProportion), &PY_TYPE_DEF(BinomialProportion), module, "BinomialProportion", 0);
        }

        void t_BinomialProportion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "class_", make_descriptor(BinomialProportion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "wrapfn_", make_descriptor(t_BinomialProportion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialProportion::initializeClass, 1)))
            return NULL;
          return t_BinomialProportion::wrap_Object(BinomialProportion(((t_BinomialProportion *) arg)->object.this$));
        }
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialProportion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getAgrestiCoullInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getAgrestiCoullInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getClopperPearsonInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getClopperPearsonInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getNormalApproximationInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getNormalApproximationInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getWilsonScoreInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWilsonScoreInterval", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EulerIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerIntegrator::class$ = NULL;
        jmethodID *EulerIntegrator::mids$ = NULL;
        bool EulerIntegrator::live$ = false;

        jclass EulerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_cd1ed9908c340903] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegrator::EulerIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        JArray< JArray< jdouble > > EulerIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > EulerIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > EulerIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
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
        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data);
        static PyGetSetDef t_EulerIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerIntegrator, a),
          DECLARE_GET_FIELD(t_EulerIntegrator, b),
          DECLARE_GET_FIELD(t_EulerIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegrator)[] = {
          { Py_tp_methods, t_EulerIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerIntegrator_init_ },
          { Py_tp_getset, t_EulerIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerIntegrator, t_EulerIntegrator, EulerIntegrator);

        void t_EulerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegrator), &PY_TYPE_DEF(EulerIntegrator), module, "EulerIntegrator", 0);
        }

        void t_EulerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "class_", make_descriptor(EulerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "wrapfn_", make_descriptor(t_EulerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerIntegrator::wrap_Object(EulerIntegrator(((t_EulerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PhaseBias::class$ = NULL;
            jmethodID *PhaseBias::mids$ = NULL;
            bool PhaseBias::live$ = false;

            jclass PhaseBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PhaseBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fedc9e2ac0abc99c] = env->getMethodID(cls, "<init>", "(IZIID)V");
                mids$[mid_getDiscontinuityCounter_55546ef6a647f39b] = env->getMethodID(cls, "getDiscontinuityCounter", "()I");
                mids$[mid_getPhaseBias_b74f83833fdad017] = env->getMethodID(cls, "getPhaseBias", "()D");
                mids$[mid_getSignalID_55546ef6a647f39b] = env->getMethodID(cls, "getSignalID", "()I");
                mids$[mid_getSignalWideLaneIntegerIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getSignalWideLaneIntegerIndicator", "()I");
                mids$[mid_isSignalInteger_9ab94ac1dc23b105] = env->getMethodID(cls, "isSignalInteger", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PhaseBias::PhaseBias(jint a0, jboolean a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fedc9e2ac0abc99c, a0, a1, a2, a3, a4)) {}

            jint PhaseBias::getDiscontinuityCounter() const
            {
              return env->callIntMethod(this$, mids$[mid_getDiscontinuityCounter_55546ef6a647f39b]);
            }

            jdouble PhaseBias::getPhaseBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPhaseBias_b74f83833fdad017]);
            }

            jint PhaseBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_55546ef6a647f39b]);
            }

            jint PhaseBias::getSignalWideLaneIntegerIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalWideLaneIntegerIndicator_55546ef6a647f39b]);
            }

            jboolean PhaseBias::isSignalInteger() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSignalInteger_9ab94ac1dc23b105]);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self);
            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self);
            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data);
            static PyGetSetDef t_PhaseBias__fields_[] = {
              DECLARE_GET_FIELD(t_PhaseBias, discontinuityCounter),
              DECLARE_GET_FIELD(t_PhaseBias, phaseBias),
              DECLARE_GET_FIELD(t_PhaseBias, signalID),
              DECLARE_GET_FIELD(t_PhaseBias, signalInteger),
              DECLARE_GET_FIELD(t_PhaseBias, signalWideLaneIntegerIndicator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PhaseBias__methods_[] = {
              DECLARE_METHOD(t_PhaseBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, getDiscontinuityCounter, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getPhaseBias, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalID, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalWideLaneIntegerIndicator, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, isSignalInteger, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PhaseBias)[] = {
              { Py_tp_methods, t_PhaseBias__methods_ },
              { Py_tp_init, (void *) t_PhaseBias_init_ },
              { Py_tp_getset, t_PhaseBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PhaseBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PhaseBias, t_PhaseBias, PhaseBias);

            void t_PhaseBias::install(PyObject *module)
            {
              installType(&PY_TYPE(PhaseBias), &PY_TYPE_DEF(PhaseBias), module, "PhaseBias", 0);
            }

            void t_PhaseBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "class_", make_descriptor(PhaseBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "wrapfn_", make_descriptor(t_PhaseBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PhaseBias::initializeClass, 1)))
                return NULL;
              return t_PhaseBias::wrap_Object(PhaseBias(((t_PhaseBias *) arg)->object.this$));
            }
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PhaseBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jboolean a1;
              jint a2;
              jint a3;
              jdouble a4;
              PhaseBias object((jobject) NULL);

              if (!parseArgs(args, "IZIID", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = PhaseBias(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSignalInteger());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSignalInteger());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUp::class$ = NULL;
          jmethodID *InterSatellitesWindUp::mids$ = NULL;
          bool InterSatellitesWindUp::live$ = false;

          jclass InterSatellitesWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_3b9f748b89094cc6] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_3b9f748b89094cc6] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
        namespace gnss {
          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args);
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data);
          static PyGetSetDef t_InterSatellitesWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesWindUp__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUp)[] = {
            { Py_tp_methods, t_InterSatellitesWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_InterSatellitesWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUp, t_InterSatellitesWindUp, InterSatellitesWindUp);
          PyObject *t_InterSatellitesWindUp::wrap_Object(const InterSatellitesWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUp), &PY_TYPE_DEF(InterSatellitesWindUp), module, "InterSatellitesWindUp", 0);
          }

          void t_InterSatellitesWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "class_", make_descriptor(InterSatellitesWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "wrapfn_", make_descriptor(t_InterSatellitesWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUp::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUp::wrap_Object(InterSatellitesWindUp(((t_InterSatellitesWindUp *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data)
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
#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizationProblemBuilder::class$ = NULL;
        jmethodID *OptimizationProblemBuilder::mids$ = NULL;
        bool OptimizationProblemBuilder::live$ = false;

        jclass OptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_build_6f03ef14ae36f9b3] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_getGenerator_a7f0ca7283ee2186] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/rugged/utils/DerivativeGenerator;");
            mids$[mid_getDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
            mids$[mid_getNbParams_55546ef6a647f39b] = env->getMethodID(cls, "getNbParams", "()I");
            mids$[mid_createTargetAndWeight_a1fa5dae97ea5ed2] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_a1fa5dae97ea5ed2] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_getSensors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
            mids$[mid_getMeasurements_6a6f7250e840c7f1] = env->getMethodID(cls, "getMeasurements", "()Lorg/orekit/rugged/adjustment/measurements/Observables;");
            mids$[mid_createFunction_6a20d4ddc607b9bb] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem OptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_6f03ef14ae36f9b3], a0, a1));
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
      namespace adjustment {
        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_OptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_OptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_OptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OptimizationProblemBuilder, t_OptimizationProblemBuilder, OptimizationProblemBuilder);

        void t_OptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizationProblemBuilder), &PY_TYPE_DEF(OptimizationProblemBuilder), module, "OptimizationProblemBuilder", 0);
        }

        void t_OptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "class_", make_descriptor(OptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "wrapfn_", make_descriptor(t_OptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_OptimizationProblemBuilder::wrap_Object(OptimizationProblemBuilder(((t_OptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationSingleCoefficient::class$ = NULL;
        jmethodID *IsotropicRadiationSingleCoefficient::mids$ = NULL;
        bool IsotropicRadiationSingleCoefficient::live$ = false;

        jclass IsotropicRadiationSingleCoefficient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_a230d7bdb943f733] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        ::java::util::List IsotropicRadiationSingleCoefficient::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a230d7bdb943f733], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self);
        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args);
        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data);
        static PyGetSetDef t_IsotropicRadiationSingleCoefficient__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationSingleCoefficient, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationSingleCoefficient__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationSingleCoefficient)[] = {
          { Py_tp_methods, t_IsotropicRadiationSingleCoefficient__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationSingleCoefficient_init_ },
          { Py_tp_getset, t_IsotropicRadiationSingleCoefficient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationSingleCoefficient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationSingleCoefficient, t_IsotropicRadiationSingleCoefficient, IsotropicRadiationSingleCoefficient);

        void t_IsotropicRadiationSingleCoefficient::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationSingleCoefficient), &PY_TYPE_DEF(IsotropicRadiationSingleCoefficient), module, "IsotropicRadiationSingleCoefficient", 0);
        }

        void t_IsotropicRadiationSingleCoefficient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "class_", make_descriptor(IsotropicRadiationSingleCoefficient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "wrapfn_", make_descriptor(t_IsotropicRadiationSingleCoefficient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationSingleCoefficient::wrap_Object(IsotropicRadiationSingleCoefficient(((t_IsotropicRadiationSingleCoefficient *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldTrapezoidIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldTrapezoidIntegrator::class$ = NULL;
        jmethodID *FieldTrapezoidIntegrator::mids$ = NULL;
        bool FieldTrapezoidIntegrator::live$ = false;
        jint FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldTrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldTrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_287374284b786369] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_81520b552cb3fa26] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_287374284b786369, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args);
        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data);
        static PyGetSetDef t_FieldTrapezoidIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTrapezoidIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTrapezoidIntegrator)[] = {
          { Py_tp_methods, t_FieldTrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldTrapezoidIntegrator_init_ },
          { Py_tp_getset, t_FieldTrapezoidIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldTrapezoidIntegrator, t_FieldTrapezoidIntegrator, FieldTrapezoidIntegrator);
        PyObject *t_FieldTrapezoidIntegrator::wrap_Object(const FieldTrapezoidIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTrapezoidIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTrapezoidIntegrator), &PY_TYPE_DEF(FieldTrapezoidIntegrator), module, "FieldTrapezoidIntegrator", 0);
        }

        void t_FieldTrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "class_", make_descriptor(FieldTrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "wrapfn_", make_descriptor(t_FieldTrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldTrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldTrapezoidIntegrator::wrap_Object(FieldTrapezoidIntegrator(((t_FieldTrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSegment::class$ = NULL;
              jmethodID *AemSegment::mids$ = NULL;
              bool AemSegment::live$ = false;

              jclass AemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ebd060a22a6a845e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/ndm/adm/aem/AemData;)V");
                  mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAvailableDerivatives_33d67d456ec94a0c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSegment::AemSegment(const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_ebd060a22a6a845e, a0.this$, a1.this$)) {}

              ::java::util::List AemSegment::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AemSegment::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_33d67d456ec94a0c]));
              }

              ::java::lang::String AemSegment::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf]));
              }

              jint AemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
              }

              ::org::orekit::frames::Frame AemSegment::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
          namespace adm {
            namespace aem {
              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args);
              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self);
              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self);
              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self);
              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self);
              static PyObject *t_AemSegment_getStart(t_AemSegment *self);
              static PyObject *t_AemSegment_getStop(t_AemSegment *self);
              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data);
              static PyGetSetDef t_AemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_AemSegment, angularCoordinates),
                DECLARE_GET_FIELD(t_AemSegment, attitudeProvider),
                DECLARE_GET_FIELD(t_AemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_AemSegment, interpolationMethod),
                DECLARE_GET_FIELD(t_AemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_AemSegment, referenceFrame),
                DECLARE_GET_FIELD(t_AemSegment, start),
                DECLARE_GET_FIELD(t_AemSegment, stop),
                DECLARE_GET_FIELD(t_AemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSegment__methods_[] = {
                DECLARE_METHOD(t_AemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemSegment, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSegment)[] = {
                { Py_tp_methods, t_AemSegment__methods_ },
                { Py_tp_init, (void *) t_AemSegment_init_ },
                { Py_tp_getset, t_AemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(AemSegment, t_AemSegment, AemSegment);
              PyObject *t_AemSegment::wrap_Object(const AemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSegment), &PY_TYPE_DEF(AemSegment), module, "AemSegment", 0);
              }

              void t_AemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "class_", make_descriptor(AemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "wrapfn_", make_descriptor(t_AemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSegment::initializeClass, 1)))
                  return NULL;
                return t_AemSegment::wrap_Object(AemSegment(((t_AemSegment *) arg)->object.this$));
              }
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemData a1((jobject) NULL);
                AemSegment object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = AemSegment(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStart(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStop(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateMatrixFunction::class$ = NULL;
      jmethodID *UnivariateMatrixFunction::mids$ = NULL;
      bool UnivariateMatrixFunction::live$ = false;

      jclass UnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_be4fdefc2fcf7494] = env->getMethodID(cls, "value", "(D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > UnivariateMatrixFunction::value(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_be4fdefc2fcf7494], a0));
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
      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_UnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateMatrixFunction, t_UnivariateMatrixFunction, UnivariateMatrixFunction);

      void t_UnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateMatrixFunction), &PY_TYPE_DEF(UnivariateMatrixFunction), module, "UnivariateMatrixFunction", 0);
      }

      void t_UnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "class_", make_descriptor(UnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateMatrixFunction::wrap_Object(UnivariateMatrixFunction(((t_UnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseAmbiguityModifier::class$ = NULL;
          jmethodID *PhaseAmbiguityModifier::mids$ = NULL;
          bool PhaseAmbiguityModifier::live$ = false;

          jclass PhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseAmbiguityModifier::PhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

          ::java::util::List PhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void PhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void PhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self);
          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_PhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_PhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_PhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(PhaseAmbiguityModifier, t_PhaseAmbiguityModifier, PhaseAmbiguityModifier);

          void t_PhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseAmbiguityModifier), &PY_TYPE_DEF(PhaseAmbiguityModifier), module, "PhaseAmbiguityModifier", 0);
          }

          void t_PhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "class_", make_descriptor(PhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_PhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseAmbiguityModifier::wrap_Object(PhaseAmbiguityModifier(((t_PhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            PhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = PhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data)
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
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MultivariateNormalDistribution::class$ = NULL;
        jmethodID *MultivariateNormalDistribution::mids$ = NULL;
        bool MultivariateNormalDistribution::live$ = false;

        jclass MultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_134a5d9f7619d4a2] = env->getMethodID(cls, "<init>", "([D[[D)V");
            mids$[mid_init$_31b33030be845745] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[D)V");
            mids$[mid_init$_612ca79ece2fa236] = env->getMethodID(cls, "<init>", "([D[[DD)V");
            mids$[mid_init$_1d9ecf23cb4dddb6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[DD)V");
            mids$[mid_density_b060e4326765ccf1] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getCovariances_f77d745f2128c391] = env->getMethodID(cls, "getCovariances", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeans_25e1757a36c4dde2] = env->getMethodID(cls, "getMeans", "()[D");
            mids$[mid_getSingularMatrixCheckTolerance_b74f83833fdad017] = env->getMethodID(cls, "getSingularMatrixCheckTolerance", "()D");
            mids$[mid_getStandardDeviations_25e1757a36c4dde2] = env->getMethodID(cls, "getStandardDeviations", "()[D");
            mids$[mid_sample_25e1757a36c4dde2] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_134a5d9f7619d4a2, a0.this$, a1.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_31b33030be845745, a0.this$, a1.this$, a2.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jdouble a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_612ca79ece2fa236, a0.this$, a1.this$, a2)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d9ecf23cb4dddb6, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble MultivariateNormalDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_b060e4326765ccf1], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateNormalDistribution::getCovariances() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_f77d745f2128c391]));
        }

        JArray< jdouble > MultivariateNormalDistribution::getMeans() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeans_25e1757a36c4dde2]));
        }

        jdouble MultivariateNormalDistribution::getSingularMatrixCheckTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSingularMatrixCheckTolerance_b74f83833fdad017]);
        }

        JArray< jdouble > MultivariateNormalDistribution::getStandardDeviations() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviations_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultivariateNormalDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_25e1757a36c4dde2]));
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
    namespace distribution {
      namespace multivariate {
        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, covariances),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, means),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, singularMatrixCheckTolerance),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, standardDeviations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getCovariances, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getMeans, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getSingularMatrixCheckTolerance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getStandardDeviations, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalDistribution, t_MultivariateNormalDistribution, MultivariateNormalDistribution);

        void t_MultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalDistribution), &PY_TYPE_DEF(MultivariateNormalDistribution), module, "MultivariateNormalDistribution", 0);
        }

        void t_MultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "class_", make_descriptor(MultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalDistribution::wrap_Object(MultivariateNormalDistribution(((t_MultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[D", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              jdouble a2;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[DD", &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[DD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2, a3));
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

        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeans());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviations());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "sample", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeans());
          return value.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviations());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUpFactory.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUpFactory::class$ = NULL;
          jmethodID *WindUpFactory::mids$ = NULL;
          bool WindUpFactory::live$ = false;

          jclass WindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_614a666a11e0ff22] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/WindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WindUpFactory::WindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::orekit::estimation::measurements::gnss::WindUp WindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::estimation::measurements::gnss::WindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_614a666a11e0ff22], a0.this$, a1, a2.this$, a3.this$));
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
        namespace gnss {
          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args);

          static PyMethodDef t_WindUpFactory__methods_[] = {
            DECLARE_METHOD(t_WindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUpFactory)[] = {
            { Py_tp_methods, t_WindUpFactory__methods_ },
            { Py_tp_init, (void *) t_WindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WindUpFactory, t_WindUpFactory, WindUpFactory);

          void t_WindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUpFactory), &PY_TYPE_DEF(WindUpFactory), module, "WindUpFactory", 0);
          }

          void t_WindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "class_", make_descriptor(WindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "wrapfn_", make_descriptor(t_WindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUpFactory::initializeClass, 1)))
              return NULL;
            return t_WindUpFactory::wrap_Object(WindUpFactory(((t_WindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            WindUpFactory object((jobject) NULL);

            INT_CALL(object = WindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::WindUp result((jobject) NULL);

            if (!parseArgs(args, "KIks", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::gnss::t_WindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *SimpleRegression::class$ = NULL;
        jmethodID *SimpleRegression::mids$ = NULL;
        bool SimpleRegression::live$ = false;

        jclass SimpleRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/SimpleRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_addData_07adb42ffaa97d31] = env->getMethodID(cls, "addData", "([[D)V");
            mids$[mid_addData_369b4c97255d5afa] = env->getMethodID(cls, "addData", "(DD)V");
            mids$[mid_addObservation_334f245ec9cee46b] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_8a9d29a6bd2c9070] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_append_ea73a073becde592] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/regression/SimpleRegression;)V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getIntercept_b74f83833fdad017] = env->getMethodID(cls, "getIntercept", "()D");
            mids$[mid_getInterceptStdErr_b74f83833fdad017] = env->getMethodID(cls, "getInterceptStdErr", "()D");
            mids$[mid_getMeanSquareError_b74f83833fdad017] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getR_b74f83833fdad017] = env->getMethodID(cls, "getR", "()D");
            mids$[mid_getRSquare_b74f83833fdad017] = env->getMethodID(cls, "getRSquare", "()D");
            mids$[mid_getRegressionSumSquares_b74f83833fdad017] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getSignificance_b74f83833fdad017] = env->getMethodID(cls, "getSignificance", "()D");
            mids$[mid_getSlope_b74f83833fdad017] = env->getMethodID(cls, "getSlope", "()D");
            mids$[mid_getSlopeConfidenceInterval_b74f83833fdad017] = env->getMethodID(cls, "getSlopeConfidenceInterval", "()D");
            mids$[mid_getSlopeConfidenceInterval_04fd0666b613d2ab] = env->getMethodID(cls, "getSlopeConfidenceInterval", "(D)D");
            mids$[mid_getSlopeStdErr_b74f83833fdad017] = env->getMethodID(cls, "getSlopeStdErr", "()D");
            mids$[mid_getSumOfCrossProducts_b74f83833fdad017] = env->getMethodID(cls, "getSumOfCrossProducts", "()D");
            mids$[mid_getSumSquaredErrors_b74f83833fdad017] = env->getMethodID(cls, "getSumSquaredErrors", "()D");
            mids$[mid_getTotalSumSquares_b74f83833fdad017] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_getXSumSquares_b74f83833fdad017] = env->getMethodID(cls, "getXSumSquares", "()D");
            mids$[mid_hasIntercept_9ab94ac1dc23b105] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_predict_04fd0666b613d2ab] = env->getMethodID(cls, "predict", "(D)D");
            mids$[mid_regress_d38bcfe2c0d5b843] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_6d4269f398dcfc41] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_removeData_07adb42ffaa97d31] = env->getMethodID(cls, "removeData", "([[D)V");
            mids$[mid_removeData_369b4c97255d5afa] = env->getMethodID(cls, "removeData", "(DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleRegression::SimpleRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        SimpleRegression::SimpleRegression(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

        void SimpleRegression::addData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_07adb42ffaa97d31], a0.this$);
        }

        void SimpleRegression::addData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_369b4c97255d5afa], a0, a1);
        }

        void SimpleRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_334f245ec9cee46b], a0.this$, a1);
        }

        void SimpleRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_8a9d29a6bd2c9070], a0.this$, a1.this$);
        }

        void SimpleRegression::append(const SimpleRegression & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_ea73a073becde592], a0.this$);
        }

        void SimpleRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        jdouble SimpleRegression::getIntercept() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIntercept_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getInterceptStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInterceptStdErr_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_b74f83833fdad017]);
        }

        jlong SimpleRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jdouble SimpleRegression::getR() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getR_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getRSquare() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquare_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getSignificance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSignificance_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getSlope() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlope_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_04fd0666b613d2ab], a0);
        }

        jdouble SimpleRegression::getSlopeStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeStdErr_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getSumOfCrossProducts() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfCrossProducts_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getSumSquaredErrors() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumSquaredErrors_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_b74f83833fdad017]);
        }

        jdouble SimpleRegression::getXSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSumSquares_b74f83833fdad017]);
        }

        jboolean SimpleRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_9ab94ac1dc23b105]);
        }

        jdouble SimpleRegression::predict(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_predict_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_d38bcfe2c0d5b843]));
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_6d4269f398dcfc41], a0.this$));
        }

        void SimpleRegression::removeData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_07adb42ffaa97d31], a0.this$);
        }

        void SimpleRegression::removeData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_369b4c97255d5afa], a0, a1);
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
        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data);
        static PyGetSetDef t_SimpleRegression__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleRegression, intercept),
          DECLARE_GET_FIELD(t_SimpleRegression, interceptStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, meanSquareError),
          DECLARE_GET_FIELD(t_SimpleRegression, n),
          DECLARE_GET_FIELD(t_SimpleRegression, r),
          DECLARE_GET_FIELD(t_SimpleRegression, rSquare),
          DECLARE_GET_FIELD(t_SimpleRegression, regressionSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, significance),
          DECLARE_GET_FIELD(t_SimpleRegression, slope),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeConfidenceInterval),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, sumOfCrossProducts),
          DECLARE_GET_FIELD(t_SimpleRegression, sumSquaredErrors),
          DECLARE_GET_FIELD(t_SimpleRegression, totalSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, xSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleRegression__methods_[] = {
          DECLARE_METHOD(t_SimpleRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, addData, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, append, METH_O),
          DECLARE_METHOD(t_SimpleRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getInterceptStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getR, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRSquare, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSignificance, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlope, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeConfidenceInterval, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumOfCrossProducts, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumSquaredErrors, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getXSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, predict, METH_O),
          DECLARE_METHOD(t_SimpleRegression, regress, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, removeData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleRegression)[] = {
          { Py_tp_methods, t_SimpleRegression__methods_ },
          { Py_tp_init, (void *) t_SimpleRegression_init_ },
          { Py_tp_getset, t_SimpleRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleRegression, t_SimpleRegression, SimpleRegression);

        void t_SimpleRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleRegression), &PY_TYPE_DEF(SimpleRegression), module, "SimpleRegression", 0);
        }

        void t_SimpleRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "class_", make_descriptor(SimpleRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "wrapfn_", make_descriptor(t_SimpleRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleRegression::initializeClass, 1)))
            return NULL;
          return t_SimpleRegression::wrap_Object(SimpleRegression(((t_SimpleRegression *) arg)->object.this$));
        }
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpleRegression object((jobject) NULL);

              INT_CALL(object = SimpleRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              SimpleRegression object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SimpleRegression(a0));
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

        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.addData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.addData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg)
        {
          SimpleRegression a0((jobject) NULL);

          if (!parseArg(arg, "k", SimpleRegression::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIntercept());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getR());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquare());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSignificance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlope());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSlopeConfidenceInterval());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSlopeConfidenceInterval(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSlopeConfidenceInterval", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.predict(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "predict", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.removeData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.removeData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "removeData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIntercept());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getR());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquare());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSignificance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlope());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeConfidenceInterval());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *NumericalPropagator::class$ = NULL;
        jmethodID *NumericalPropagator::mids$ = NULL;
        bool NumericalPropagator::live$ = false;

        jclass NumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/NumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9bd4ec1fb1f57fec] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
            mids$[mid_init$_8cb76235d98db22e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_43775e92e64180fc] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_a1fa5dae97ea5ed2] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_fcb96c98de6fad04] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_280c3390961e0a50] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setMu_8ba9fe7a847cecad] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setOrbitType_2fa1f3b8966f0286] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_778d09854443b806] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_5cc4ccb0751fcdce] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/utils/AbsolutePVCoordinates;)[[D");
            mids$[mid_tolerances_317e36e0066b2cd6] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_fff282e93f6e84f2] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_createMapper_74f07e2c0845997b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_8e0da39ae64099e8] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpStmAndJacobianGenerators_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
            mids$[mid_beforeIntegration_2d7f9a496c7e9781] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_9bd4ec1fb1f57fec, a0.this$)) {}

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_8cb76235d98db22e, a0.this$, a1.this$)) {}

        void NumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_43775e92e64180fc], a0.this$);
        }

        ::java::util::List NumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_e62d3bb06d56d7e3]));
        }

        ::org::orekit::orbits::OrbitType NumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates NumericalPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType NumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        void NumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_a1fa5dae97ea5ed2]);
        }

        void NumericalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
        }

        void NumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_fcb96c98de6fad04], a0);
        }

        void NumericalPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_280c3390961e0a50], a0.this$);
        }

        void NumericalPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_8ba9fe7a847cecad], a0);
        }

        void NumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_2fa1f3b8966f0286], a0.this$);
        }

        void NumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_778d09854443b806], a0.this$);
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::utils::AbsolutePVCoordinates & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_5cc4ccb0751fcdce], a0, a1.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_317e36e0066b2cd6], a0, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_fff282e93f6e84f2], a0, a1, a2.this$, a3.this$));
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
      namespace numerical {
        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_NumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_NumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_NumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, positionAngleType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagator)[] = {
          { Py_tp_methods, t_NumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagator_init_ },
          { Py_tp_getset, t_NumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(NumericalPropagator, t_NumericalPropagator, NumericalPropagator);

        void t_NumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagator), &PY_TYPE_DEF(NumericalPropagator), module, "NumericalPropagator", 0);
        }

        void t_NumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "class_", make_descriptor(NumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "wrapfn_", make_descriptor(t_NumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagator::wrap_Object(NumericalPropagator(((t_NumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
              {
                INT_CALL(object = NumericalPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NumericalPropagator(a0, a1));
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

        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args)
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::utils::AbsolutePVCoordinates a1((jobject) NULL);
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::Orbit a2((jobject) NULL);
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldLUDecomposition.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposition::class$ = NULL;
      jmethodID *FieldLUDecomposition::mids$ = NULL;
      bool FieldLUDecomposition::live$ = false;

      jclass FieldLUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c04247304967ec8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_getDeterminant_2ff8de927fda4153] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getL_81d49643ce3a3c0b] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getP_81d49643ce3a3c0b] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getPivot_4d095d7a08163110] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_61721a02c0d2f3a9] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_getU_81d49643ce3a3c0b] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLUDecomposition::FieldLUDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c04247304967ec8, a0.this$)) {}

      ::org::hipparchus::FieldElement FieldLUDecomposition::getDeterminant() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getDeterminant_2ff8de927fda4153]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getL_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getP_81d49643ce3a3c0b]));
      }

      JArray< jint > FieldLUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_4d095d7a08163110]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_61721a02c0d2f3a9]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getU_81d49643ce3a3c0b]));
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
      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args);
      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data);
      static PyGetSetDef t_FieldLUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposition, determinant),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, l),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, p),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, pivot),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, u),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposition)[] = {
        { Py_tp_methods, t_FieldLUDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldLUDecomposition_init_ },
        { Py_tp_getset, t_FieldLUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposition, t_FieldLUDecomposition, FieldLUDecomposition);
      PyObject *t_FieldLUDecomposition::wrap_Object(const FieldLUDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposition), &PY_TYPE_DEF(FieldLUDecomposition), module, "FieldLUDecomposition", 0);
      }

      void t_FieldLUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "class_", make_descriptor(FieldLUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "wrapfn_", make_descriptor(t_FieldLUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposition::wrap_Object(FieldLUDecomposition(((t_FieldLUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldLUDecomposition object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          INT_CALL(object = FieldLUDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/SGP4.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SGP4::class$ = NULL;
          jmethodID *SGP4::mids$ = NULL;
          bool SGP4::live$ = false;

          jclass SGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7a5e69c032c7e921] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_3b79aaf1b59208bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_sxpInitialize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_8ba9fe7a847cecad] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_7a5e69c032c7e921, a0.this$, a1.this$, a2)) {}

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_3b79aaf1b59208bb, a0.this$, a1.this$, a2, a3.this$)) {}
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
        namespace tle {
          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_SGP4__methods_[] = {
            DECLARE_METHOD(t_SGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SGP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SGP4)[] = {
            { Py_tp_methods, t_SGP4__methods_ },
            { Py_tp_init, (void *) t_SGP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SGP4, t_SGP4, SGP4);

          void t_SGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SGP4), &PY_TYPE_DEF(SGP4), module, "SGP4", 0);
          }

          void t_SGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "class_", make_descriptor(SGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "wrapfn_", make_descriptor(t_SGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SGP4::initializeClass, 1)))
              return NULL;
            return t_SGP4::wrap_Object(SGP4(((t_SGP4 *) arg)->object.this$));
          }
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SGP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SGP4(a0, a1, a2, a3));
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatelliteRangeModifier::class$ = NULL;
          jmethodID *ShapiroInterSatelliteRangeModifier::mids$ = NULL;
          bool ShapiroInterSatelliteRangeModifier::live$ = false;

          jclass ShapiroInterSatelliteRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatelliteRangeModifier::ShapiroInterSatelliteRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::java::util::List ShapiroInterSatelliteRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void ShapiroInterSatelliteRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatelliteRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatelliteRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatelliteRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatelliteRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatelliteRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatelliteRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatelliteRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatelliteRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatelliteRangeModifier, t_ShapiroInterSatelliteRangeModifier, ShapiroInterSatelliteRangeModifier);

          void t_ShapiroInterSatelliteRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatelliteRangeModifier), &PY_TYPE_DEF(ShapiroInterSatelliteRangeModifier), module, "ShapiroInterSatelliteRangeModifier", 0);
          }

          void t_ShapiroInterSatelliteRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "class_", make_descriptor(ShapiroInterSatelliteRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatelliteRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatelliteRangeModifier::wrap_Object(ShapiroInterSatelliteRangeModifier(((t_ShapiroInterSatelliteRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatelliteRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatelliteRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D::class$ = NULL;
          jmethodID *Euclidean1D::mids$ = NULL;
          bool Euclidean1D::live$ = false;

          jclass Euclidean1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_80ec234213ca3d44] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");
              mids$[mid_getSubSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          Euclidean1D Euclidean1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_80ec234213ca3d44]));
          }

          ::org::hipparchus::geometry::Space Euclidean1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_9afbccb68c8e9ef8]));
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
      namespace euclidean {
        namespace oned {
          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data);
          static PyGetSetDef t_Euclidean1D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean1D, dimension),
            DECLARE_GET_FIELD(t_Euclidean1D, instance),
            DECLARE_GET_FIELD(t_Euclidean1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean1D__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D)[] = {
            { Py_tp_methods, t_Euclidean1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean1D, t_Euclidean1D, Euclidean1D);

          void t_Euclidean1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D), &PY_TYPE_DEF(Euclidean1D), module, "Euclidean1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Euclidean1D$NoSubSpaceException)));
          }

          void t_Euclidean1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "class_", make_descriptor(Euclidean1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "wrapfn_", make_descriptor(t_Euclidean1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D::wrap_Object(Euclidean1D(((t_Euclidean1D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type)
          {
            Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Euclidean1D::getInstance());
            return t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data)
          {
            Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean1D::wrap_Object(value);
          }

          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OrekitConfiguration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OrekitConfiguration::class$ = NULL;
      jmethodID *OrekitConfiguration::mids$ = NULL;
      bool OrekitConfiguration::live$ = false;

      jclass OrekitConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OrekitConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCacheSlotsNumber_55546ef6a647f39b] = env->getStaticMethodID(cls, "getCacheSlotsNumber", "()I");
          mids$[mid_setCacheSlotsNumber_44ed599e93e8a30c] = env->getStaticMethodID(cls, "setCacheSlotsNumber", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint OrekitConfiguration::getCacheSlotsNumber()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getCacheSlotsNumber_55546ef6a647f39b]);
      }

      void OrekitConfiguration::setCacheSlotsNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setCacheSlotsNumber_44ed599e93e8a30c], a0);
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
      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type);
      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data);
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data);
      static PyGetSetDef t_OrekitConfiguration__fields_[] = {
        DECLARE_GETSET_FIELD(t_OrekitConfiguration, cacheSlotsNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitConfiguration__methods_[] = {
        DECLARE_METHOD(t_OrekitConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, getCacheSlotsNumber, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, setCacheSlotsNumber, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitConfiguration)[] = {
        { Py_tp_methods, t_OrekitConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrekitConfiguration, t_OrekitConfiguration, OrekitConfiguration);

      void t_OrekitConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitConfiguration), &PY_TYPE_DEF(OrekitConfiguration), module, "OrekitConfiguration", 0);
      }

      void t_OrekitConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "class_", make_descriptor(OrekitConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "wrapfn_", make_descriptor(t_OrekitConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitConfiguration::initializeClass, 1)))
          return NULL;
        return t_OrekitConfiguration::wrap_Object(OrekitConfiguration(((t_OrekitConfiguration *) arg)->object.this$));
      }
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type)
      {
        jint result;
        OBJ_CALL(result = ::org::orekit::utils::OrekitConfiguration::getCacheSlotsNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(::org::orekit::utils::OrekitConfiguration::setCacheSlotsNumber(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setCacheSlotsNumber", arg);
        return NULL;
      }

      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCacheSlotsNumber());
        return PyLong_FromLong((long) value);
      }
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setCacheSlotsNumber(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "cacheSlotsNumber", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "java/lang/Class.h"
#include "java/lang/Long.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataType::class$ = NULL;
          jmethodID *DataType::mids$ = NULL;
          bool DataType::live$ = false;
          DataType *DataType::BIT_1 = NULL;
          DataType *DataType::BIT_10 = NULL;
          DataType *DataType::BIT_12 = NULL;
          DataType *DataType::BIT_2 = NULL;
          DataType *DataType::BIT_24 = NULL;
          DataType *DataType::BIT_3 = NULL;
          DataType *DataType::BIT_32 = NULL;
          DataType *DataType::BIT_4 = NULL;
          DataType *DataType::BIT_6 = NULL;
          DataType *DataType::BIT_7 = NULL;
          DataType *DataType::BIT_8 = NULL;
          DataType *DataType::INT_10 = NULL;
          DataType *DataType::INT_11 = NULL;
          DataType *DataType::INT_14 = NULL;
          DataType *DataType::INT_15 = NULL;
          DataType *DataType::INT_16 = NULL;
          DataType *DataType::INT_17 = NULL;
          DataType *DataType::INT_18 = NULL;
          DataType *DataType::INT_19 = NULL;
          DataType *DataType::INT_20 = NULL;
          DataType *DataType::INT_21 = NULL;
          DataType *DataType::INT_22 = NULL;
          DataType *DataType::INT_23 = NULL;
          DataType *DataType::INT_24 = NULL;
          DataType *DataType::INT_25 = NULL;
          DataType *DataType::INT_26 = NULL;
          DataType *DataType::INT_27 = NULL;
          DataType *DataType::INT_30 = NULL;
          DataType *DataType::INT_31 = NULL;
          DataType *DataType::INT_32 = NULL;
          DataType *DataType::INT_34 = NULL;
          DataType *DataType::INT_35 = NULL;
          DataType *DataType::INT_38 = NULL;
          DataType *DataType::INT_6 = NULL;
          DataType *DataType::INT_8 = NULL;
          DataType *DataType::INT_9 = NULL;
          DataType *DataType::INT_S_11 = NULL;
          DataType *DataType::INT_S_22 = NULL;
          DataType *DataType::INT_S_24 = NULL;
          DataType *DataType::INT_S_27 = NULL;
          DataType *DataType::INT_S_32 = NULL;
          DataType *DataType::INT_S_5 = NULL;
          DataType *DataType::U_INT_10 = NULL;
          DataType *DataType::U_INT_11 = NULL;
          DataType *DataType::U_INT_12 = NULL;
          DataType *DataType::U_INT_13 = NULL;
          DataType *DataType::U_INT_14 = NULL;
          DataType *DataType::U_INT_16 = NULL;
          DataType *DataType::U_INT_17 = NULL;
          DataType *DataType::U_INT_18 = NULL;
          DataType *DataType::U_INT_2 = NULL;
          DataType *DataType::U_INT_20 = NULL;
          DataType *DataType::U_INT_23 = NULL;
          DataType *DataType::U_INT_24 = NULL;
          DataType *DataType::U_INT_25 = NULL;
          DataType *DataType::U_INT_26 = NULL;
          DataType *DataType::U_INT_27 = NULL;
          DataType *DataType::U_INT_3 = NULL;
          DataType *DataType::U_INT_30 = NULL;
          DataType *DataType::U_INT_32 = NULL;
          DataType *DataType::U_INT_35 = NULL;
          DataType *DataType::U_INT_36 = NULL;
          DataType *DataType::U_INT_4 = NULL;
          DataType *DataType::U_INT_5 = NULL;
          DataType *DataType::U_INT_6 = NULL;
          DataType *DataType::U_INT_7 = NULL;
          DataType *DataType::U_INT_8 = NULL;
          DataType *DataType::U_INT_9 = NULL;

          jclass DataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_decode_a2b468540cedecd5] = env->getMethodID(cls, "decode", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/Long;");
              mids$[mid_valueOf_13cfb1d27c4b8205] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/DataType;");
              mids$[mid_values_7d548b9b0a22cf33] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/DataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BIT_1 = new DataType(env->getStaticObjectField(cls, "BIT_1", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_10 = new DataType(env->getStaticObjectField(cls, "BIT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_12 = new DataType(env->getStaticObjectField(cls, "BIT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_2 = new DataType(env->getStaticObjectField(cls, "BIT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_24 = new DataType(env->getStaticObjectField(cls, "BIT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_3 = new DataType(env->getStaticObjectField(cls, "BIT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_32 = new DataType(env->getStaticObjectField(cls, "BIT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_4 = new DataType(env->getStaticObjectField(cls, "BIT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_6 = new DataType(env->getStaticObjectField(cls, "BIT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_7 = new DataType(env->getStaticObjectField(cls, "BIT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_8 = new DataType(env->getStaticObjectField(cls, "BIT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_10 = new DataType(env->getStaticObjectField(cls, "INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_11 = new DataType(env->getStaticObjectField(cls, "INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_14 = new DataType(env->getStaticObjectField(cls, "INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_15 = new DataType(env->getStaticObjectField(cls, "INT_15", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_16 = new DataType(env->getStaticObjectField(cls, "INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_17 = new DataType(env->getStaticObjectField(cls, "INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_18 = new DataType(env->getStaticObjectField(cls, "INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_19 = new DataType(env->getStaticObjectField(cls, "INT_19", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_20 = new DataType(env->getStaticObjectField(cls, "INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_21 = new DataType(env->getStaticObjectField(cls, "INT_21", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_22 = new DataType(env->getStaticObjectField(cls, "INT_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_23 = new DataType(env->getStaticObjectField(cls, "INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_24 = new DataType(env->getStaticObjectField(cls, "INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_25 = new DataType(env->getStaticObjectField(cls, "INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_26 = new DataType(env->getStaticObjectField(cls, "INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_27 = new DataType(env->getStaticObjectField(cls, "INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_30 = new DataType(env->getStaticObjectField(cls, "INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_31 = new DataType(env->getStaticObjectField(cls, "INT_31", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_32 = new DataType(env->getStaticObjectField(cls, "INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_34 = new DataType(env->getStaticObjectField(cls, "INT_34", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_35 = new DataType(env->getStaticObjectField(cls, "INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_38 = new DataType(env->getStaticObjectField(cls, "INT_38", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_6 = new DataType(env->getStaticObjectField(cls, "INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_8 = new DataType(env->getStaticObjectField(cls, "INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_9 = new DataType(env->getStaticObjectField(cls, "INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_11 = new DataType(env->getStaticObjectField(cls, "INT_S_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_22 = new DataType(env->getStaticObjectField(cls, "INT_S_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_24 = new DataType(env->getStaticObjectField(cls, "INT_S_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_27 = new DataType(env->getStaticObjectField(cls, "INT_S_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_32 = new DataType(env->getStaticObjectField(cls, "INT_S_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_5 = new DataType(env->getStaticObjectField(cls, "INT_S_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_10 = new DataType(env->getStaticObjectField(cls, "U_INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_11 = new DataType(env->getStaticObjectField(cls, "U_INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_12 = new DataType(env->getStaticObjectField(cls, "U_INT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_13 = new DataType(env->getStaticObjectField(cls, "U_INT_13", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_14 = new DataType(env->getStaticObjectField(cls, "U_INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_16 = new DataType(env->getStaticObjectField(cls, "U_INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_17 = new DataType(env->getStaticObjectField(cls, "U_INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_18 = new DataType(env->getStaticObjectField(cls, "U_INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_2 = new DataType(env->getStaticObjectField(cls, "U_INT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_20 = new DataType(env->getStaticObjectField(cls, "U_INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_23 = new DataType(env->getStaticObjectField(cls, "U_INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_24 = new DataType(env->getStaticObjectField(cls, "U_INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_25 = new DataType(env->getStaticObjectField(cls, "U_INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_26 = new DataType(env->getStaticObjectField(cls, "U_INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_27 = new DataType(env->getStaticObjectField(cls, "U_INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_3 = new DataType(env->getStaticObjectField(cls, "U_INT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_30 = new DataType(env->getStaticObjectField(cls, "U_INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_32 = new DataType(env->getStaticObjectField(cls, "U_INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_35 = new DataType(env->getStaticObjectField(cls, "U_INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_36 = new DataType(env->getStaticObjectField(cls, "U_INT_36", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_4 = new DataType(env->getStaticObjectField(cls, "U_INT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_5 = new DataType(env->getStaticObjectField(cls, "U_INT_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_6 = new DataType(env->getStaticObjectField(cls, "U_INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_7 = new DataType(env->getStaticObjectField(cls, "U_INT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_8 = new DataType(env->getStaticObjectField(cls, "U_INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_9 = new DataType(env->getStaticObjectField(cls, "U_INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::Long DataType::decode(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return ::java::lang::Long(env->callObjectMethod(this$, mids$[mid_decode_a2b468540cedecd5], a0.this$));
          }

          DataType DataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_13cfb1d27c4b8205], a0.this$));
          }

          JArray< DataType > DataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_7d548b9b0a22cf33]));
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
        namespace parser {
          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args);
          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg);
          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataType_values(PyTypeObject *type);
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data);
          static PyGetSetDef t_DataType__fields_[] = {
            DECLARE_GET_FIELD(t_DataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataType__methods_[] = {
            DECLARE_METHOD(t_DataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataType, decode, METH_O),
            DECLARE_METHOD(t_DataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataType)[] = {
            { Py_tp_methods, t_DataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataType, t_DataType, DataType);
          PyObject *t_DataType::wrap_Object(const DataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataType::install(PyObject *module)
          {
            installType(&PY_TYPE(DataType), &PY_TYPE_DEF(DataType), module, "DataType", 0);
          }

          void t_DataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "class_", make_descriptor(DataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "wrapfn_", make_descriptor(t_DataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_1", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_10", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_12", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_2", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_24", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_3", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_32", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_4", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_6", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_7", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_8", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_15", make_descriptor(t_DataType::wrap_Object(*DataType::INT_15)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_19", make_descriptor(t_DataType::wrap_Object(*DataType::INT_19)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_21", make_descriptor(t_DataType::wrap_Object(*DataType::INT_21)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_31", make_descriptor(t_DataType::wrap_Object(*DataType::INT_31)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_34", make_descriptor(t_DataType::wrap_Object(*DataType::INT_34)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_38", make_descriptor(t_DataType::wrap_Object(*DataType::INT_38)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::INT_9)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_5", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_12", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_13", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_13)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_2", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_3", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_36", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_36)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_4", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_5", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_7", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_9)));
          }

          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataType::initializeClass, 1)))
              return NULL;
            return t_DataType::wrap_Object(DataType(((t_DataType *) arg)->object.this$));
          }
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            ::java::lang::Long result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.decode(a0));
              return ::java::lang::t_Long::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "decode", arg);
            return NULL;
          }

          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::valueOf(a0));
              return t_DataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataType_values(PyTypeObject *type)
          {
            JArray< DataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::values());
            return JArray<jobject>(result.this$).wrap(t_DataType::wrap_jobject);
          }
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonGeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *PythonGeneratedMeasurementSubscriber::mids$ = NULL;
          bool PythonGeneratedMeasurementSubscriber::live$ = false;

          jclass PythonGeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_handleGeneratedMeasurement_1640bf51befb0c77] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGeneratedMeasurementSubscriber::PythonGeneratedMeasurementSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonGeneratedMeasurementSubscriber::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonGeneratedMeasurementSubscriber::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonGeneratedMeasurementSubscriber::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace generation {
          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data);
          static PyGetSetDef t_PythonGeneratedMeasurementSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGeneratedMeasurementSubscriber, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_PythonGeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) t_PythonGeneratedMeasurementSubscriber_init_ },
            { Py_tp_getset, t_PythonGeneratedMeasurementSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGeneratedMeasurementSubscriber, t_PythonGeneratedMeasurementSubscriber, PythonGeneratedMeasurementSubscriber);

          void t_PythonGeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGeneratedMeasurementSubscriber), &PY_TYPE_DEF(PythonGeneratedMeasurementSubscriber), module, "PythonGeneratedMeasurementSubscriber", 1);
          }

          void t_PythonGeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "class_", make_descriptor(PythonGeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_PythonGeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGeneratedMeasurementSubscriber::initializeClass);
            JNINativeMethod methods[] = {
              { "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V", (void *) t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonGeneratedMeasurementSubscriber_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonGeneratedMeasurementSubscriber_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_PythonGeneratedMeasurementSubscriber::wrap_Object(PythonGeneratedMeasurementSubscriber(((t_PythonGeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds)
          {
            PythonGeneratedMeasurementSubscriber object((jobject) NULL);

            INT_CALL(object = PythonGeneratedMeasurementSubscriber());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args)
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

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *result = PyObject_CallMethod(obj, "handleGeneratedMeasurement", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/TricubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolator::class$ = NULL;
        jmethodID *TricubicInterpolator::mids$ = NULL;
        bool TricubicInterpolator::live$ = false;

        jclass TricubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_de9289063d337e7b] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/interpolation/TricubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolator::TricubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction TricubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_de9289063d337e7b], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace interpolation {
        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolator)[] = {
          { Py_tp_methods, t_TricubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolator, t_TricubicInterpolator, TricubicInterpolator);

        void t_TricubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolator), &PY_TYPE_DEF(TricubicInterpolator), module, "TricubicInterpolator", 0);
        }

        void t_TricubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "class_", make_descriptor(TricubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "wrapfn_", make_descriptor(t_TricubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolator::wrap_Object(TricubicInterpolator(((t_TricubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          TricubicInterpolator object((jobject) NULL);

          INT_CALL(object = TricubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::interpolation::t_TricubicInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSRangeModifier::RelativisticClockOneWayGNSSRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::java::util::List RelativisticClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSRangeModifier, t_RelativisticClockOneWayGNSSRangeModifier, RelativisticClockOneWayGNSSRangeModifier);

          void t_RelativisticClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSRangeModifier), module, "RelativisticClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSRangeModifier::wrap_Object(RelativisticClockOneWayGNSSRangeModifier(((t_RelativisticClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/propagation/events/PythonEventDetectorsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetectorsProvider::class$ = NULL;
        jmethodID *PythonEventDetectorsProvider::mids$ = NULL;
        bool PythonEventDetectorsProvider::live$ = false;

        jclass PythonEventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetectorsProvider::PythonEventDetectorsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEventDetectorsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEventDetectorsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEventDetectorsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self);
        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data);
        static PyGetSetDef t_PythonEventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetectorsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetectorsProvider)[] = {
          { Py_tp_methods, t_PythonEventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetectorsProvider_init_ },
          { Py_tp_getset, t_PythonEventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetectorsProvider, t_PythonEventDetectorsProvider, PythonEventDetectorsProvider);

        void t_PythonEventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetectorsProvider), &PY_TYPE_DEF(PythonEventDetectorsProvider), module, "PythonEventDetectorsProvider", 1);
        }

        void t_PythonEventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "class_", make_descriptor(PythonEventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "wrapfn_", make_descriptor(t_PythonEventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetectorsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getEventDetectors0 },
            { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getFieldEventDetectors1 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetectorsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetectorsProvider::wrap_Object(PythonEventDetectorsProvider(((t_PythonEventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetectorsProvider object((jobject) NULL);

          INT_CALL(object = PythonEventDetectorsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataFilter::class$ = NULL;
      jmethodID *DataFilter::mids$ = NULL;
      bool DataFilter::live$ = false;

      jclass DataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_filter_bbc30294b1b0b691] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::data::DataSource DataFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_bbc30294b1b0b691], a0.this$));
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
      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg);

      static PyMethodDef t_DataFilter__methods_[] = {
        DECLARE_METHOD(t_DataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataFilter)[] = {
        { Py_tp_methods, t_DataFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataFilter, t_DataFilter, DataFilter);

      void t_DataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(DataFilter), &PY_TYPE_DEF(DataFilter), module, "DataFilter", 0);
      }

      void t_DataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "class_", make_descriptor(DataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "wrapfn_", make_descriptor(t_DataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataFilter::initializeClass, 1)))
          return NULL;
        return t_DataFilter::wrap_Object(DataFilter(((t_DataFilter *) arg)->object.this$));
      }
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Short.h"
#include "java/lang/Short.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Short::class$ = NULL;
    jmethodID *Short::mids$ = NULL;
    bool Short::live$ = false;
    jint Short::BYTES = (jint) 0;
    jshort Short::MAX_VALUE = (jshort) 0;
    jshort Short::MIN_VALUE = (jshort) 0;
    jint Short::SIZE = (jint) 0;
    ::java::lang::Class *Short::TYPE = NULL;

    jclass Short::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Short");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_87fce9dc35ce6b26] = env->getMethodID(cls, "<init>", "(S)V");
        mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_4993d3387235345d] = env->getStaticMethodID(cls, "compare", "(SS)I");
        mids$[mid_compareTo_93b740fd6c9781cc] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Short;)I");
        mids$[mid_compareUnsigned_4993d3387235345d] = env->getStaticMethodID(cls, "compareUnsigned", "(SS)I");
        mids$[mid_decode_fe5ef6b9f541b154] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_214f93074a0d96b4] = env->getStaticMethodID(cls, "hashCode", "(S)I");
        mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseShort_0db376306b95481b] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;)S");
        mids$[mid_parseShort_3b213f09839e1e52] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;I)S");
        mids$[mid_reverseBytes_38a362a37e228d3b] = env->getStaticMethodID(cls, "reverseBytes", "(S)S");
        mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_46ad5d9649cd1ffa] = env->getStaticMethodID(cls, "toString", "(S)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_214f93074a0d96b4] = env->getStaticMethodID(cls, "toUnsignedInt", "(S)I");
        mids$[mid_toUnsignedLong_080dd964855b0700] = env->getStaticMethodID(cls, "toUnsignedLong", "(S)J");
        mids$[mid_valueOf_fe5ef6b9f541b154] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_valueOf_ce83a7f38f80ae65] = env->getStaticMethodID(cls, "valueOf", "(S)Ljava/lang/Short;");
        mids$[mid_valueOf_664e4bc5e201c754] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticShortField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticShortField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Short::Short(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Short::Short(jshort a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_87fce9dc35ce6b26, a0)) {}

    jbyte Short::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
    }

    jint Short::compare(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_4993d3387235345d], a0, a1);
    }

    jint Short::compareTo(const Short & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_93b740fd6c9781cc], a0.this$);
    }

    jint Short::compareUnsigned(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_4993d3387235345d], a0, a1);
    }

    Short Short::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_decode_fe5ef6b9f541b154], a0.this$));
    }

    jdouble Short::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
    }

    jboolean Short::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jfloat Short::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
    }

    jint Short::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Short::hashCode(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_214f93074a0d96b4], a0);
    }

    jint Short::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
    }

    jlong Short::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
    }

    jshort Short::parseShort(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_0db376306b95481b], a0.this$);
    }

    jshort Short::parseShort(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_3b213f09839e1e52], a0.this$, a1);
    }

    jshort Short::reverseBytes(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_reverseBytes_38a362a37e228d3b], a0);
    }

    jshort Short::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
    }

    ::java::lang::String Short::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Short::toString(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_46ad5d9649cd1ffa], a0));
    }

    jint Short::toUnsignedInt(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_214f93074a0d96b4], a0);
    }

    jlong Short::toUnsignedLong(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_080dd964855b0700], a0);
    }

    Short Short::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fe5ef6b9f541b154], a0.this$));
    }

    Short Short::valueOf(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ce83a7f38f80ae65], a0));
    }

    Short Short::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_664e4bc5e201c754], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg);
    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_equals(t_Short *self, PyObject *args);
    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_intValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_longValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Short__methods_[] = {
      DECLARE_METHOD(t_Short, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, compareTo, METH_O),
      DECLARE_METHOD(t_Short, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, equals, METH_VARARGS),
      DECLARE_METHOD(t_Short, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, parseShort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Short)[] = {
      { Py_tp_methods, t_Short__methods_ },
      { Py_tp_init, (void *) t_Short_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Short)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Short, t_Short, Short);

    void t_Short::install(PyObject *module)
    {
      installType(&PY_TYPE(Short), &PY_TYPE_DEF(Short), module, "Short", 0);
    }

    void t_Short::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "class_", make_descriptor(Short::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "wrapfn_", make_descriptor(unboxShort));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "boxfn_", make_descriptor(boxShort));
      env->getClass(Short::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "BYTES", make_descriptor(Short::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MAX_VALUE", make_descriptor(Short::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MIN_VALUE", make_descriptor(Short::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "SIZE", make_descriptor(Short::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Short::TYPE)));
    }

    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Short::initializeClass, 1)))
        return NULL;
      return t_Short::wrap_Object(Short(((t_Short *) arg)->object.this$));
    }
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Short::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Short(a0));
            self->object = object;
            break;
          }
        }
        {
          jshort a0;
          Short object((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            INT_CALL(object = Short(a0));
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

    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg)
    {
      Short a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Short), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Short result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::decode(a0));
        return t_Short::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Short_equals(t_Short *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jint result;

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Short_intValue(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Short_longValue(t_Short *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jshort result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jshort result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseShort", args);
      return NULL;
    }

    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jshort result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Short_toString(t_Short *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jint result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jlong result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        {
          jshort a0;
          Short result((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Short result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0, a1));
            return t_Short::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitException::class$ = NULL;
      jmethodID *OrekitException::mids$ = NULL;
      bool OrekitException::live$ = false;

      jclass OrekitException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5156a99a29d65d29] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_4bb1ca1d16a113c3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;Ljava/lang/Throwable;)V");
          mids$[mid_init$_4d462b77e7e55a0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_unwrap_f8191f14ec005730] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/OrekitException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitException::OrekitException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_5156a99a29d65d29, a0.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4bb1ca1d16a113c3, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4d462b77e7e55a0d, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String OrekitException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable OrekitException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
      }

      OrekitException OrekitException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_f8191f14ec005730], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getParts(t_OrekitException *self);
      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self);
      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data);
      static PyGetSetDef t_OrekitException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitException, message),
        DECLARE_GET_FIELD(t_OrekitException, parts),
        DECLARE_GET_FIELD(t_OrekitException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitException__methods_[] = {
        DECLARE_METHOD(t_OrekitException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, getSpecifier, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, unwrap, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitException)[] = {
        { Py_tp_methods, t_OrekitException__methods_ },
        { Py_tp_init, (void *) t_OrekitException_init_ },
        { Py_tp_getset, t_OrekitException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(OrekitException, t_OrekitException, OrekitException);

      void t_OrekitException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitException), &PY_TYPE_DEF(OrekitException), module, "OrekitException", 0);
      }

      void t_OrekitException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "class_", make_descriptor(OrekitException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "wrapfn_", make_descriptor(t_OrekitException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitException::initializeClass, 1)))
          return NULL;
        return t_OrekitException::wrap_Object(OrekitException(((t_OrekitException *) arg)->object.this$));
      }
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = OrekitException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            ::java::lang::Throwable a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::exception::Localizable::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrekitException(a0, a1, a2));
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

      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitException_getParts(t_OrekitException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
        OrekitException result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitException::unwrap(a0));
          return t_OrekitException::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unwrap", arg);
        return NULL;
      }

      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data)
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
#include "org/orekit/propagation/analytical/AggregateBoundedPropagator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/util/Collection.h"
#include "java/util/NavigableMap.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AggregateBoundedPropagator::class$ = NULL;
        jmethodID *AggregateBoundedPropagator::mids$ = NULL;
        bool AggregateBoundedPropagator::live$ = false;

        jclass AggregateBoundedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AggregateBoundedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_init$_21d6c74f3613f3f1] = env->getMethodID(cls, "<init>", "(Ljava/util/NavigableMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPropagators_8dd7b68149ce41ea] = env->getMethodID(cls, "getPropagators", "()Ljava/util/NavigableMap;");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_basicPropagate_4f0008999861ca31] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::Collection & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::NavigableMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_21d6c74f3613f3f1, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::propagation::SpacecraftState AggregateBoundedPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_9d155cc8314c99cf]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates AggregateBoundedPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
        }

        ::java::util::NavigableMap AggregateBoundedPropagator::getPropagators() const
        {
          return ::java::util::NavigableMap(env->callObjectMethod(this$, mids$[mid_getPropagators_8dd7b68149ce41ea]));
        }

        void AggregateBoundedPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
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
        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data);
        static PyGetSetDef t_AggregateBoundedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, initialState),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, maxDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, minDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, propagators),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregateBoundedPropagator__methods_[] = {
          DECLARE_METHOD(t_AggregateBoundedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPropagators, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedPropagator)[] = {
          { Py_tp_methods, t_AggregateBoundedPropagator__methods_ },
          { Py_tp_init, (void *) t_AggregateBoundedPropagator_init_ },
          { Py_tp_getset, t_AggregateBoundedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregateBoundedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AggregateBoundedPropagator, t_AggregateBoundedPropagator, AggregateBoundedPropagator);

        void t_AggregateBoundedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregateBoundedPropagator), &PY_TYPE_DEF(AggregateBoundedPropagator), module, "AggregateBoundedPropagator", 0);
        }

        void t_AggregateBoundedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "class_", make_descriptor(AggregateBoundedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "wrapfn_", make_descriptor(t_AggregateBoundedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregateBoundedPropagator::initializeClass, 1)))
            return NULL;
          return t_AggregateBoundedPropagator::wrap_Object(AggregateBoundedPropagator(((t_AggregateBoundedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregateBoundedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::NavigableMap a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::java::util::NavigableMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &a2))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0, a1, a2));
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

        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self)
        {
          ::java::util::NavigableMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data)
        {
          ::java::util::NavigableMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonModelObserver.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonModelObserver::class$ = NULL;
        jmethodID *PythonModelObserver::mids$ = NULL;
        bool PythonModelObserver::live$ = false;

        jclass PythonModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_modelCalled_cc0ac39e38c56725] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonModelObserver::PythonModelObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonModelObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonModelObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonModelObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      namespace leastsquares {
        static PyObject *t_PythonModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonModelObserver_init_(t_PythonModelObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonModelObserver_finalize(t_PythonModelObserver *self);
        static PyObject *t_PythonModelObserver_pythonExtension(t_PythonModelObserver *self, PyObject *args);
        static void JNICALL t_PythonModelObserver_modelCalled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonModelObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonModelObserver_get__self(t_PythonModelObserver *self, void *data);
        static PyGetSetDef t_PythonModelObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonModelObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonModelObserver__methods_[] = {
          DECLARE_METHOD(t_PythonModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonModelObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonModelObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonModelObserver)[] = {
          { Py_tp_methods, t_PythonModelObserver__methods_ },
          { Py_tp_init, (void *) t_PythonModelObserver_init_ },
          { Py_tp_getset, t_PythonModelObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonModelObserver, t_PythonModelObserver, PythonModelObserver);

        void t_PythonModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonModelObserver), &PY_TYPE_DEF(PythonModelObserver), module, "PythonModelObserver", 1);
        }

        void t_PythonModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "class_", make_descriptor(PythonModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "wrapfn_", make_descriptor(t_PythonModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonModelObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V", (void *) t_PythonModelObserver_modelCalled0 },
            { "pythonDecRef", "()V", (void *) t_PythonModelObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonModelObserver::initializeClass, 1)))
            return NULL;
          return t_PythonModelObserver::wrap_Object(PythonModelObserver(((t_PythonModelObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonModelObserver_init_(t_PythonModelObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonModelObserver object((jobject) NULL);

          INT_CALL(object = PythonModelObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonModelObserver_finalize(t_PythonModelObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonModelObserver_pythonExtension(t_PythonModelObserver *self, PyObject *args)
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

        static void JNICALL t_PythonModelObserver_modelCalled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::orbits::t_Orbit::wrap_jobject);
          PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
          PyObject *result = PyObject_CallMethod(obj, "modelCalled", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonModelObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonModelObserver_get__self(t_PythonModelObserver *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedExceptionWrapper.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedExceptionWrapper::class$ = NULL;
        jmethodID *RuggedExceptionWrapper::mids$ = NULL;
        bool RuggedExceptionWrapper::live$ = false;

        jclass RuggedExceptionWrapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedExceptionWrapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fefacca744cd46c6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/errors/RuggedException;)V");
            mids$[mid_getException_3fe1f0c20143accc] = env->getMethodID(cls, "getException", "()Lorg/orekit/rugged/errors/RuggedException;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedExceptionWrapper::RuggedExceptionWrapper(const ::org::orekit::rugged::errors::RuggedException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_fefacca744cd46c6, a0.this$)) {}

        ::org::orekit::rugged::errors::RuggedException RuggedExceptionWrapper::getException() const
        {
          return ::org::orekit::rugged::errors::RuggedException(env->callObjectMethod(this$, mids$[mid_getException_3fe1f0c20143accc]));
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
      namespace errors {
        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self);
        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data);
        static PyGetSetDef t_RuggedExceptionWrapper__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedExceptionWrapper, exception),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedExceptionWrapper__methods_[] = {
          DECLARE_METHOD(t_RuggedExceptionWrapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, getException, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedExceptionWrapper)[] = {
          { Py_tp_methods, t_RuggedExceptionWrapper__methods_ },
          { Py_tp_init, (void *) t_RuggedExceptionWrapper_init_ },
          { Py_tp_getset, t_RuggedExceptionWrapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedExceptionWrapper)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedExceptionWrapper, t_RuggedExceptionWrapper, RuggedExceptionWrapper);

        void t_RuggedExceptionWrapper::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedExceptionWrapper), &PY_TYPE_DEF(RuggedExceptionWrapper), module, "RuggedExceptionWrapper", 0);
        }

        void t_RuggedExceptionWrapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "class_", make_descriptor(RuggedExceptionWrapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "wrapfn_", make_descriptor(t_RuggedExceptionWrapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedExceptionWrapper::initializeClass, 1)))
            return NULL;
          return t_RuggedExceptionWrapper::wrap_Object(RuggedExceptionWrapper(((t_RuggedExceptionWrapper *) arg)->object.this$));
        }
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedExceptionWrapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::errors::RuggedException a0((jobject) NULL);
          RuggedExceptionWrapper object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::rugged::errors::RuggedException::initializeClass, &a0))
          {
            INT_CALL(object = RuggedExceptionWrapper(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self)
        {
          ::org::orekit::rugged::errors::RuggedException result((jobject) NULL);
          OBJ_CALL(result = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(result);
        }

        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data)
        {
          ::org::orekit::rugged::errors::RuggedException value((jobject) NULL);
          OBJ_CALL(value = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(value);
        }
      }
    }
  }
}
