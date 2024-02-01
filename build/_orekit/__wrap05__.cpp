#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/GroundPointing.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *GroundPointing::class$ = NULL;
      jmethodID *GroundPointing::mids$ = NULL;
      bool GroundPointing::live$ = false;

      jclass GroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/GroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_267252ddff45220c] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_494718838b66cf03] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getBodyFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPosition_34b2324cb9b1595f] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTargetPosition_f778d81301c7076a] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude GroundPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude GroundPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_267252ddff45220c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_494718838b66cf03], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame GroundPointing::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_cb151471db4570f0]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self);
      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data);
      static PyGetSetDef t_GroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_GroundPointing, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GroundPointing__methods_[] = {
        DECLARE_METHOD(t_GroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getBodyFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GroundPointing)[] = {
        { Py_tp_methods, t_GroundPointing__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GroundPointing)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GroundPointing, t_GroundPointing, GroundPointing);

      void t_GroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(GroundPointing), &PY_TYPE_DEF(GroundPointing), module, "GroundPointing", 0);
      }

      void t_GroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "class_", make_descriptor(GroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "wrapfn_", make_descriptor(t_GroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GroundPointing::initializeClass, 1)))
          return NULL;
        return t_GroundPointing::wrap_Object(GroundPointing(((t_GroundPointing *) arg)->object.this$));
      }
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList::class$ = NULL;
      jmethodID *ParameterDriversList::mids$ = NULL;
      bool ParameterDriversList::live$ = false;

      jclass ParameterDriversList::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_680e005705d5f0aa] = env->getMethodID(cls, "add", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_filter_b35db77cae58639e] = env->getMethodID(cls, "filter", "(Z)V");
          mids$[mid_findByName_d92ee69c6e397a4a] = env->getMethodID(cls, "findByName", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriversList$DelegatingDriver;");
          mids$[mid_findDelegatingSpanNameBySpanName_95277969d373e11f] = env->getMethodID(cls, "findDelegatingSpanNameBySpanName", "(Ljava/lang/String;)Ljava/lang/String;");
          mids$[mid_getDrivers_d751c1a57012b438] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
          mids$[mid_getNbParams_d6ab429752e7c267] = env->getMethodID(cls, "getNbParams", "()I");
          mids$[mid_getNbValuesToEstimate_d6ab429752e7c267] = env->getMethodID(cls, "getNbValuesToEstimate", "()I");
          mids$[mid_sort_ff7cb6c242604316] = env->getMethodID(cls, "sort", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriversList::ParameterDriversList() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void ParameterDriversList::add(const ::org::orekit::utils::ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_680e005705d5f0aa], a0.this$);
      }

      void ParameterDriversList::filter(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_filter_b35db77cae58639e], a0);
      }

      ::org::orekit::utils::ParameterDriversList$DelegatingDriver ParameterDriversList::findByName(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriversList$DelegatingDriver(env->callObjectMethod(this$, mids$[mid_findByName_d92ee69c6e397a4a], a0.this$));
      }

      ::java::lang::String ParameterDriversList::findDelegatingSpanNameBySpanName(const ::java::lang::String & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_findDelegatingSpanNameBySpanName_95277969d373e11f], a0.this$));
      }

      ::java::util::List ParameterDriversList::getDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDrivers_d751c1a57012b438]));
      }

      jint ParameterDriversList::getNbParams() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParams_d6ab429752e7c267]);
      }

      jint ParameterDriversList::getNbValuesToEstimate() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbValuesToEstimate_d6ab429752e7c267]);
      }

      void ParameterDriversList::sort() const
      {
        env->callVoidMethod(this$, mids$[mid_sort_ff7cb6c242604316]);
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
      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data);
      static PyGetSetDef t_ParameterDriversList__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList, drivers),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbParams),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbValuesToEstimate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, add, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, filter, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findByName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findDelegatingSpanNameBySpanName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, getDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbParams, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbValuesToEstimate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, sort, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList)[] = {
        { Py_tp_methods, t_ParameterDriversList__methods_ },
        { Py_tp_init, (void *) t_ParameterDriversList_init_ },
        { Py_tp_getset, t_ParameterDriversList__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList, t_ParameterDriversList, ParameterDriversList);

      void t_ParameterDriversList::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList), &PY_TYPE_DEF(ParameterDriversList), module, "ParameterDriversList", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "DelegatingDriver", make_descriptor(&PY_TYPE_DEF(ParameterDriversList$DelegatingDriver)));
      }

      void t_ParameterDriversList::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "class_", make_descriptor(ParameterDriversList::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "wrapfn_", make_descriptor(t_ParameterDriversList::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList::wrap_Object(ParameterDriversList(((t_ParameterDriversList *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds)
      {
        ParameterDriversList object((jobject) NULL);

        INT_CALL(object = ParameterDriversList());
        self->object = object;

        return 0;
      }

      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.add(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.filter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriversList$DelegatingDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findByName(a0));
          return ::org::orekit::utils::t_ParameterDriversList$DelegatingDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findByName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findDelegatingSpanNameBySpanName(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findDelegatingSpanNameBySpanName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriversList$DelegatingDriver));
      }

      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParams());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self)
      {
        OBJ_CALL(self->object.sort());
        Py_RETURN_NONE;
      }

      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParams());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPFitter.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFitter::class$ = NULL;
      jmethodID *EOPFitter::mids$ = NULL;
      bool EOPFitter::live$ = false;

      jclass EOPFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f95a29a5946b8d92] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;)V");
          mids$[mid_fit_89b72b029e478937] = env->getMethodID(cls, "fit", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/frames/EOPFittedModel;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFitter::EOPFitter(const ::org::orekit::frames::SingleParameterFitter & a0, const ::org::orekit::frames::SingleParameterFitter & a1, const ::org::orekit::frames::SingleParameterFitter & a2, const ::org::orekit::frames::SingleParameterFitter & a3, const ::org::orekit::frames::SingleParameterFitter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f95a29a5946b8d92, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::frames::EOPFittedModel EOPFitter::fit(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::frames::EOPFittedModel(env->callObjectMethod(this$, mids$[mid_fit_89b72b029e478937], a0.this$));
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
      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg);

      static PyMethodDef t_EOPFitter__methods_[] = {
        DECLARE_METHOD(t_EOPFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFitter)[] = {
        { Py_tp_methods, t_EOPFitter__methods_ },
        { Py_tp_init, (void *) t_EOPFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFitter, t_EOPFitter, EOPFitter);

      void t_EOPFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFitter), &PY_TYPE_DEF(EOPFitter), module, "EOPFitter", 0);
      }

      void t_EOPFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "class_", make_descriptor(EOPFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "wrapfn_", make_descriptor(t_EOPFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFitter::initializeClass, 1)))
          return NULL;
        return t_EOPFitter::wrap_Object(EOPFitter(((t_EOPFitter *) arg)->object.this$));
      }
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::SingleParameterFitter a0((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a1((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a2((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a3((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a4((jobject) NULL);
        EOPFitter object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::frames::EOPFittedModel result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return ::org::orekit::frames::t_EOPFittedModel::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointFieldIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointFieldIntegratorBuilder::mids$ = NULL;
        bool MidpointFieldIntegratorBuilder::live$ = false;

        jclass MidpointFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator MidpointFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
      namespace conversion {
        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_MidpointFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegratorBuilder, t_MidpointFieldIntegratorBuilder, MidpointFieldIntegratorBuilder);
        PyObject *t_MidpointFieldIntegratorBuilder::wrap_Object(const MidpointFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegratorBuilder), &PY_TYPE_DEF(MidpointFieldIntegratorBuilder), module, "MidpointFieldIntegratorBuilder", 0);
        }

        void t_MidpointFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "class_", make_descriptor(MidpointFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegratorBuilder::wrap_Object(MidpointFieldIntegratorBuilder(((t_MidpointFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
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

        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractEopParser.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopParser::class$ = NULL;
      jmethodID *AbstractEopParser::mids$ = NULL;
      bool AbstractEopParser::live$ = false;

      jclass AbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_55a099913f3c39f3] = env->getMethodID(cls, "getConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getUtc_5e2cac12ab8da943] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
          mids$[mid_getItrfVersionProvider_a389eb463a1e729c] = env->getMethodID(cls, "getItrfVersionProvider", "()Lorg/orekit/frames/ItrfVersionProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_AbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_AbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopParser, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopParser)[] = {
        { Py_tp_methods, t_AbstractEopParser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractEopParser, t_AbstractEopParser, AbstractEopParser);

      void t_AbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopParser), &PY_TYPE_DEF(AbstractEopParser), module, "AbstractEopParser", 0);
      }

      void t_AbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "class_", make_descriptor(AbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "wrapfn_", make_descriptor(t_AbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_AbstractEopParser::wrap_Object(AbstractEopParser(((t_AbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeModifierUtil.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeModifierUtil::class$ = NULL;
          jmethodID *RangeModifierUtil::mids$ = NULL;
          bool RangeModifierUtil::live$ = false;

          jclass RangeModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeModifierUtil");

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
        namespace modifiers {
          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeModifierUtil)[] = {
            { Py_tp_methods, t_RangeModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeModifierUtil, t_RangeModifierUtil, RangeModifierUtil);

          void t_RangeModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeModifierUtil), &PY_TYPE_DEF(RangeModifierUtil), module, "RangeModifierUtil", 0);
          }

          void t_RangeModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "class_", make_descriptor(RangeModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "wrapfn_", make_descriptor(t_RangeModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeModifierUtil::wrap_Object(RangeModifierUtil(((t_RangeModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeModifierUtil::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonFieldOfView.h"
#include "java/util/List.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonFieldOfView::class$ = NULL;
        jmethodID *PythonFieldOfView::mids$ = NULL;
        bool PythonFieldOfView::live$ = false;

        jclass PythonFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_0ed2f5155c3855f6] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_9981f74b2d109da6] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_53c542efd8574582] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOfView::PythonFieldOfView() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldOfView::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self);
        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data);
        static PyGetSetDef t_PythonFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOfView)[] = {
          { Py_tp_methods, t_PythonFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOfView_init_ },
          { Py_tp_getset, t_PythonFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOfView, t_PythonFieldOfView, PythonFieldOfView);

        void t_PythonFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOfView), &PY_TYPE_DEF(PythonFieldOfView), module, "PythonFieldOfView", 1);
        }

        void t_PythonFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "class_", make_descriptor(PythonFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "wrapfn_", make_descriptor(t_PythonFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonFieldOfView_getFootprint0 },
            { "getMargin", "()D", (void *) t_PythonFieldOfView_getMargin1 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonFieldOfView_offsetFromBoundary2 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonFieldOfView_projectToBoundary3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOfView_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOfView::wrap_Object(PythonFieldOfView(((t_PythonFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOfView object((jobject) NULL);

          INT_CALL(object = PythonFieldOfView());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
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

        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMargin", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMargin", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853FieldIntegrator::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegrator::mids$ = NULL;
        bool DormandPrince853FieldIntegrator::live$ = false;

        jclass DormandPrince853FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_00877c251fc4db11] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_5843d38540497bc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_ffc79f3ef838af81] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853FieldStateInterpolator;");
            mids$[mid_estimateError_2bb116b8560eb7ee] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_00877c251fc4db11, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5843d38540497bc2, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince853FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
        }

        jint DormandPrince853FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
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
        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, order),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegrator)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegrator_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegrator, t_DormandPrince853FieldIntegrator, DormandPrince853FieldIntegrator);
        PyObject *t_DormandPrince853FieldIntegrator::wrap_Object(const DormandPrince853FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegrator), &PY_TYPE_DEF(DormandPrince853FieldIntegrator), module, "DormandPrince853FieldIntegrator", 0);
        }

        void t_DormandPrince853FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "class_", make_descriptor(DormandPrince853FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegrator::wrap_Object(DormandPrince853FieldIntegrator(((t_DormandPrince853FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *RuleFactory::class$ = NULL;
          jmethodID *RuleFactory::mids$ = NULL;
          bool RuleFactory::live$ = false;

          jclass RuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/RuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_c07c8b9364272960] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair RuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_c07c8b9364272960], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg);

          static PyMethodDef t_RuleFactory__methods_[] = {
            DECLARE_METHOD(t_RuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RuleFactory)[] = {
            { Py_tp_methods, t_RuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RuleFactory, t_RuleFactory, RuleFactory);

          void t_RuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(RuleFactory), &PY_TYPE_DEF(RuleFactory), module, "RuleFactory", 0);
          }

          void t_RuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "class_", make_descriptor(RuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "wrapfn_", make_descriptor(t_RuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RuleFactory::initializeClass, 1)))
              return NULL;
            return t_RuleFactory::wrap_Object(RuleFactory(((t_RuleFactory *) arg)->object.this$));
          }
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *GlobalIonosphereMapModel::class$ = NULL;
          jmethodID *GlobalIonosphereMapModel::mids$ = NULL;
          bool GlobalIonosphereMapModel::live$ = false;

          jclass GlobalIonosphereMapModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_8b7bdc179240132e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;[Lorg/orekit/data/DataSource;)V");
              mids$[mid_init$_ab02e9635eee86ad] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_c84aeff9124fe654] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_d2f5e0e8b7e00e80] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::org::orekit::time::TimeScale & a0, const JArray< ::org::orekit::data::DataSource > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b7bdc179240132e, a0.this$, a1.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab02e9635eee86ad, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List GlobalIonosphereMapModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::CalculusFieldElement GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_c84aeff9124fe654], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_d2f5e0e8b7e00e80], a0.this$, a1.this$, a2, a3.this$);
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
          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self);
          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args);
          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data);
          static PyGetSetDef t_GlobalIonosphereMapModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalIonosphereMapModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalIonosphereMapModel__methods_[] = {
            DECLARE_METHOD(t_GlobalIonosphereMapModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalIonosphereMapModel)[] = {
            { Py_tp_methods, t_GlobalIonosphereMapModel__methods_ },
            { Py_tp_init, (void *) t_GlobalIonosphereMapModel_init_ },
            { Py_tp_getset, t_GlobalIonosphereMapModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalIonosphereMapModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalIonosphereMapModel, t_GlobalIonosphereMapModel, GlobalIonosphereMapModel);

          void t_GlobalIonosphereMapModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalIonosphereMapModel), &PY_TYPE_DEF(GlobalIonosphereMapModel), module, "GlobalIonosphereMapModel", 0);
          }

          void t_GlobalIonosphereMapModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "class_", make_descriptor(GlobalIonosphereMapModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "wrapfn_", make_descriptor(t_GlobalIonosphereMapModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalIonosphereMapModel::initializeClass, 1)))
              return NULL;
            return t_GlobalIonosphereMapModel::wrap_Object(GlobalIonosphereMapModel(((t_GlobalIonosphereMapModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalIonosphereMapModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                JArray< ::org::orekit::data::DataSource > a1((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "k[k", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1, a2));
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

          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data)
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
#include "org/orekit/files/general/PythonEphemerisFile.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFile::class$ = NULL;
        jmethodID *PythonEphemerisFile::mids$ = NULL;
        bool PythonEphemerisFile::live$ = false;

        jclass PythonEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFile::PythonEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEphemerisFile::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace general {
        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self);
        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFile)[] = {
          { Py_tp_methods, t_PythonEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFile_init_ },
          { Py_tp_getset, t_PythonEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFile, t_PythonEphemerisFile, PythonEphemerisFile);

        void t_PythonEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFile), &PY_TYPE_DEF(PythonEphemerisFile), module, "PythonEphemerisFile", 1);
        }

        void t_PythonEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "class_", make_descriptor(PythonEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "wrapfn_", make_descriptor(t_PythonEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFile::wrap_Object(PythonEphemerisFile(((t_PythonEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data)
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
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesWave::class$ = NULL;
          jmethodID *OceanTidesWave::mids$ = NULL;
          bool OceanTidesWave::live$ = false;

          jclass OceanTidesWave::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesWave");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fedaacf1eb9b48b2] = env->getMethodID(cls, "<init>", "(III[[[D)V");
              mids$[mid_addContribution_ce7693dd65ef9f35] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/data/BodiesElements;[[D[[D)V");
              mids$[mid_getDoodson_d6ab429752e7c267] = env->getMethodID(cls, "getDoodson", "()I");
              mids$[mid_getMaxDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesWave::OceanTidesWave(jint a0, jint a1, jint a2, const JArray< JArray< JArray< jdouble > > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fedaacf1eb9b48b2, a0, a1, a2, a3.this$)) {}

          void OceanTidesWave::addContribution(const ::org::orekit::data::BodiesElements & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addContribution_ce7693dd65ef9f35], a0.this$, a1.this$, a2.this$);
          }

          jint OceanTidesWave::getDoodson() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodson_d6ab429752e7c267]);
          }

          jint OceanTidesWave::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_d6ab429752e7c267]);
          }

          jint OceanTidesWave::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_d6ab429752e7c267]);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args);
          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data);
          static PyGetSetDef t_OceanTidesWave__fields_[] = {
            DECLARE_GET_FIELD(t_OceanTidesWave, doodson),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxDegree),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxOrder),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesWave__methods_[] = {
            DECLARE_METHOD(t_OceanTidesWave, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, addContribution, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesWave, getDoodson, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxOrder, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesWave)[] = {
            { Py_tp_methods, t_OceanTidesWave__methods_ },
            { Py_tp_init, (void *) t_OceanTidesWave_init_ },
            { Py_tp_getset, t_OceanTidesWave__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesWave)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesWave, t_OceanTidesWave, OceanTidesWave);

          void t_OceanTidesWave::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesWave), &PY_TYPE_DEF(OceanTidesWave), module, "OceanTidesWave", 0);
          }

          void t_OceanTidesWave::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "class_", make_descriptor(OceanTidesWave::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "wrapfn_", make_descriptor(t_OceanTidesWave::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesWave::initializeClass, 1)))
              return NULL;
            return t_OceanTidesWave::wrap_Object(OceanTidesWave(((t_OceanTidesWave *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesWave::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
            OceanTidesWave object((jobject) NULL);

            if (!parseArgs(args, "III[[[D", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OceanTidesWave(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "k[[D[[D", ::org::orekit::data::BodiesElements::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addContribution(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addContribution", args);
            return NULL;
          }

          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodson());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodson());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSRangeBuilder::class$ = NULL;
          jmethodID *OneWayGNSSRangeBuilder::mids$ = NULL;
          bool OneWayGNSSRangeBuilder::live$ = false;

          jclass OneWayGNSSRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_6430d1d108ccbb08] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange OneWayGNSSRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange(env->callObjectMethod(this$, mids$[mid_build_6430d1d108ccbb08], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRangeBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSRangeBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRangeBuilder, t_OneWayGNSSRangeBuilder, OneWayGNSSRangeBuilder);
          PyObject *t_OneWayGNSSRangeBuilder::wrap_Object(const OneWayGNSSRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRangeBuilder), &PY_TYPE_DEF(OneWayGNSSRangeBuilder), module, "OneWayGNSSRangeBuilder", 0);
          }

          void t_OneWayGNSSRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "class_", make_descriptor(OneWayGNSSRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRangeBuilder::wrap_Object(OneWayGNSSRangeBuilder(((t_OneWayGNSSRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data)
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
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AdditionalStateProvider::class$ = NULL;
      jmethodID *AdditionalStateProvider::mids$ = NULL;
      bool AdditionalStateProvider::live$ = false;

      jclass AdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_34f098c1d43e614c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > AdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_e8a4ac02afc72623], a0.this$));
      }

      ::java::lang::String AdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      void AdditionalStateProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
      }

      jboolean AdditionalStateProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_34f098c1d43e614c], a0.this$);
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
      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self);
      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args);
      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data);
      static PyGetSetDef t_AdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AdditionalStateProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_AdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_AdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AdditionalStateProvider)[] = {
        { Py_tp_methods, t_AdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AdditionalStateProvider, t_AdditionalStateProvider, AdditionalStateProvider);

      void t_AdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AdditionalStateProvider), &PY_TYPE_DEF(AdditionalStateProvider), module, "AdditionalStateProvider", 0);
      }

      void t_AdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "class_", make_descriptor(AdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "wrapfn_", make_descriptor(t_AdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_AdditionalStateProvider::wrap_Object(AdditionalStateProvider(((t_AdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yields(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yields", arg);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeFrame::class$ = NULL;
            jmethodID *ScreenVolumeFrame::mids$ = NULL;
            bool ScreenVolumeFrame::live$ = false;
            ScreenVolumeFrame *ScreenVolumeFrame::RTN = NULL;
            ScreenVolumeFrame *ScreenVolumeFrame::TVN = NULL;

            jclass ScreenVolumeFrame::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_2f39602c4f995519] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_values_843d6c3c2e12cc08] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RTN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                TVN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "TVN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeFrame ScreenVolumeFrame::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2f39602c4f995519], a0.this$));
            }

            JArray< ScreenVolumeFrame > ScreenVolumeFrame::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_843d6c3c2e12cc08]));
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
          namespace cdm {
            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data);
            static PyGetSetDef t_ScreenVolumeFrame__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeFrame, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeFrame__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeFrame, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeFrame, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeFrame)[] = {
              { Py_tp_methods, t_ScreenVolumeFrame__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeFrame__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeFrame)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeFrame, t_ScreenVolumeFrame, ScreenVolumeFrame);
            PyObject *t_ScreenVolumeFrame::wrap_Object(const ScreenVolumeFrame& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeFrame::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeFrame), &PY_TYPE_DEF(ScreenVolumeFrame), module, "ScreenVolumeFrame", 0);
            }

            void t_ScreenVolumeFrame::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "class_", make_descriptor(ScreenVolumeFrame::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "wrapfn_", make_descriptor(t_ScreenVolumeFrame::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeFrame::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "RTN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::RTN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "TVN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::TVN)));
            }

            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeFrame::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeFrame::wrap_Object(ScreenVolumeFrame(((t_ScreenVolumeFrame *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeFrame::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeFrame result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::valueOf(a0));
                return t_ScreenVolumeFrame::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeFrame > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeFrame::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/SGP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
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
              mids$[mid_init$_40bdc63bf602b2a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_877f7a4f81da784a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_sxpInitialize_ff7cb6c242604316] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_40bdc63bf602b2a8, a0.this$, a1.this$, a2)) {}

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_877f7a4f81da784a, a0.this$, a1.this$, a2, a3.this$)) {}
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
#include "org/orekit/bodies/LoxodromeArc.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LoxodromeArc::class$ = NULL;
      jmethodID *LoxodromeArc::mids$ = NULL;
      bool LoxodromeArc::live$ = false;

      jclass LoxodromeArc::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LoxodromeArc");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c96165ad9f4c0ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_586d4a08b742b674] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_calculatePointAlongArc_ec6f4d2d88b0733c] = env->getMethodID(cls, "calculatePointAlongArc", "(D)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getDistance_9981f74b2d109da6] = env->getMethodID(cls, "getDistance", "()D");
          mids$[mid_getFinalPoint_bdca252cae79438c] = env->getMethodID(cls, "getFinalPoint", "()Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_3c96165ad9f4c0ab, a0.this$, a1.this$, a2.this$)) {}

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_586d4a08b742b674, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::calculatePointAlongArc(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_calculatePointAlongArc_ec6f4d2d88b0733c], a0));
      }

      jdouble LoxodromeArc::getDistance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_9981f74b2d109da6]);
      }

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::getFinalPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getFinalPoint_bdca252cae79438c]));
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
      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg);
      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data);
      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data);
      static PyGetSetDef t_LoxodromeArc__fields_[] = {
        DECLARE_GET_FIELD(t_LoxodromeArc, distance),
        DECLARE_GET_FIELD(t_LoxodromeArc, finalPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoxodromeArc__methods_[] = {
        DECLARE_METHOD(t_LoxodromeArc, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, calculatePointAlongArc, METH_O),
        DECLARE_METHOD(t_LoxodromeArc, getDistance, METH_NOARGS),
        DECLARE_METHOD(t_LoxodromeArc, getFinalPoint, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoxodromeArc)[] = {
        { Py_tp_methods, t_LoxodromeArc__methods_ },
        { Py_tp_init, (void *) t_LoxodromeArc_init_ },
        { Py_tp_getset, t_LoxodromeArc__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoxodromeArc)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Loxodrome),
        NULL
      };

      DEFINE_TYPE(LoxodromeArc, t_LoxodromeArc, LoxodromeArc);

      void t_LoxodromeArc::install(PyObject *module)
      {
        installType(&PY_TYPE(LoxodromeArc), &PY_TYPE_DEF(LoxodromeArc), module, "LoxodromeArc", 0);
      }

      void t_LoxodromeArc::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "class_", make_descriptor(LoxodromeArc::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "wrapfn_", make_descriptor(t_LoxodromeArc::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoxodromeArc::initializeClass, 1)))
          return NULL;
        return t_LoxodromeArc::wrap_Object(LoxodromeArc(((t_LoxodromeArc *) arg)->object.this$));
      }
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoxodromeArc::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2, a3));
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

      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.calculatePointAlongArc(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "calculatePointAlongArc", arg);
        return NULL;
      }

      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDistance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDistance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Transform.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Transform::class$ = NULL;
      jmethodID *Transform::mids$ = NULL;
      bool Transform::live$ = false;
      Transform *Transform::IDENTITY = NULL;

      jclass Transform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Transform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_53b511dfac966d9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_6cd7edb8044c4c4f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_cf5f08326bbab2f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_31e6f8c616daea23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c3bbf60ac4acdc0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_9204f9dff7aae59d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_7b623ae2fc3786b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_a2b364081bb4b263] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_9086b91a3588262e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_04ca53ad0bba71dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_freeze_da06dd761109637f] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getAcceleration_032312bdeb3f2f93] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngular_76b9e5ce5fa05103] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_getCartesian_78e01095d7eced90] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_da06dd761109637f] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getJacobian_fbedb6ce2f15e3cc] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[D)V");
          mids$[mid_getRotation_4d68cff5f6e4403a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_032312bdeb3f2f93] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_032312bdeb3f2f93] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTranslation_032312bdeb3f2f93] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_032312bdeb3f2f93] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_interpolate_b7c3f2b896f21900] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/frames/Transform;");
          mids$[mid_interpolate_3be1861a6dc0cf44] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/Transform;");
          mids$[mid_shiftedBy_7fd6858dd2efbc88] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/Transform;");
          mids$[mid_staticShiftedBy_214367d2bf1a05d4] = env->getMethodID(cls, "staticShiftedBy", "(D)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toStaticTransform_4707295cf0323d2d] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformPVCoordinates_42f03a1654758e56] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_d354398d2df6ac32] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_transformPVCoordinates_1bd1ef8a7bbb7399] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_923313623a7fdc2f] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new Transform(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/frames/Transform;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53b511dfac966d9d, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6cd7edb8044c4c4f, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf5f08326bbab2f8, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31e6f8c616daea23, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3bbf60ac4acdc0a, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9204f9dff7aae59d, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const Transform & a1, const Transform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b623ae2fc3786b5, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2b364081bb4b263, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9086b91a3588262e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_04ca53ad0bba71dc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform Transform::freeze() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_freeze_da06dd761109637f]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_032312bdeb3f2f93]));
      }

      ::org::orekit::utils::AngularCoordinates Transform::getAngular() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_76b9e5ce5fa05103]));
      }

      ::org::orekit::utils::PVCoordinates Transform::getCartesian() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_78e01095d7eced90]));
      }

      ::org::orekit::time::AbsoluteDate Transform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      Transform Transform::getInverse() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_getInverse_da06dd761109637f]));
      }

      void Transform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_fbedb6ce2f15e3cc], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Transform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_4d68cff5f6e4403a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_032312bdeb3f2f93]));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_interpolate_b7c3f2b896f21900], a0.this$, a1.this$));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return Transform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_3be1861a6dc0cf44], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Transform Transform::shiftedBy(jdouble a0) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_shiftedBy_7fd6858dd2efbc88], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::staticShiftedBy(jdouble a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_214367d2bf1a05d4], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_4707295cf0323d2d]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_42f03a1654758e56], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_d354398d2df6ac32], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_1bd1ef8a7bbb7399], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_923313623a7fdc2f], a0.this$));
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
      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Transform_freeze(t_Transform *self);
      static PyObject *t_Transform_getAcceleration(t_Transform *self);
      static PyObject *t_Transform_getAngular(t_Transform *self);
      static PyObject *t_Transform_getCartesian(t_Transform *self);
      static PyObject *t_Transform_getDate(t_Transform *self);
      static PyObject *t_Transform_getInverse(t_Transform *self);
      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_getRotation(t_Transform *self);
      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self);
      static PyObject *t_Transform_getRotationRate(t_Transform *self);
      static PyObject *t_Transform_getTranslation(t_Transform *self);
      static PyObject *t_Transform_getVelocity(t_Transform *self);
      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_toStaticTransform(t_Transform *self);
      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__angular(t_Transform *self, void *data);
      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data);
      static PyObject *t_Transform_get__date(t_Transform *self, void *data);
      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data);
      static PyObject *t_Transform_get__translation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data);
      static PyGetSetDef t_Transform__fields_[] = {
        DECLARE_GET_FIELD(t_Transform, acceleration),
        DECLARE_GET_FIELD(t_Transform, angular),
        DECLARE_GET_FIELD(t_Transform, cartesian),
        DECLARE_GET_FIELD(t_Transform, date),
        DECLARE_GET_FIELD(t_Transform, inverse),
        DECLARE_GET_FIELD(t_Transform, rotation),
        DECLARE_GET_FIELD(t_Transform, rotationAcceleration),
        DECLARE_GET_FIELD(t_Transform, rotationRate),
        DECLARE_GET_FIELD(t_Transform, translation),
        DECLARE_GET_FIELD(t_Transform, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Transform__methods_[] = {
        DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_Transform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_Transform, interpolate, METH_VARARGS),
        DECLARE_METHOD(t_Transform, interpolate_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Transform, shiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_Transform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
        { Py_tp_methods, t_Transform__methods_ },
        { Py_tp_init, (void *) t_Transform_init_ },
        { Py_tp_getset, t_Transform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Transform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Transform, t_Transform, Transform);

      void t_Transform::install(PyObject *module)
      {
        installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
      }

      void t_Transform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        env->getClass(Transform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "IDENTITY", make_descriptor(t_Transform::wrap_Object(*Transform::IDENTITY)));
      }

      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
          return NULL;
        return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
      }
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Transform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            Transform a1((jobject) NULL);
            Transform a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, Transform::initializeClass, Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
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

      static PyObject *t_Transform_freeze(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getAngular(t_Transform *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getCartesian(t_Transform *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getDate(t_Transform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Transform_getInverse(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_Transform_getRotation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationRate(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getTranslation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getVelocity(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::stream::Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }

      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        ::java::util::Collection a3((jobject) NULL);
        PyTypeObject **p3;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::Transform::interpolate(a0, a1, a2, a3));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "interpolate_", args);
        return NULL;
      }

      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        Transform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::frames::StaticTransform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_toStaticTransform(t_Transform *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__angular(t_Transform *self, void *data)
      {
        ::org::orekit::utils::AngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__date(t_Transform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data)
      {
        Transform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Transform::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__translation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHullGenerator2D::class$ = NULL;
            jmethodID *ConvexHullGenerator2D::mids$ = NULL;
            bool ConvexHullGenerator2D::live$ = false;

            jclass ConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_7454961d4f202a9b] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D ConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_7454961d4f202a9b], a0.this$));
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args);

            static PyMethodDef t_ConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_ConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::hull::ConvexHullGenerator),
              NULL
            };

            DEFINE_TYPE(ConvexHullGenerator2D, t_ConvexHullGenerator2D, ConvexHullGenerator2D);

            void t_ConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHullGenerator2D), &PY_TYPE_DEF(ConvexHullGenerator2D), module, "ConvexHullGenerator2D", 0);
            }

            void t_ConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "class_", make_descriptor(ConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "wrapfn_", make_descriptor(t_ConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHullGenerator2D::wrap_Object(ConvexHullGenerator2D(((t_ConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              return callSuper(PY_TYPE(ConvexHullGenerator2D), (PyObject *) self, "generate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSAlmanac::class$ = NULL;
            jmethodID *GPSAlmanac::mids$ = NULL;
            bool GPSAlmanac::live$ = false;

            jclass GPSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_d6ab429752e7c267] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSVN_d6ab429752e7c267] = env->getMethodID(cls, "getSVN", "()I");
                mids$[mid_getSatConfiguration_d6ab429752e7c267] = env->getMethodID(cls, "getSatConfiguration", "()I");
                mids$[mid_getSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_getTGD_9981f74b2d109da6] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_d6ab429752e7c267] = env->getMethodID(cls, "getURA", "()I");
                mids$[mid_setHealth_8fd427ab23829bf5] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSVN_8fd427ab23829bf5] = env->getMethodID(cls, "setSVN", "(I)V");
                mids$[mid_setSatConfiguration_8fd427ab23829bf5] = env->getMethodID(cls, "setSatConfiguration", "(I)V");
                mids$[mid_setSource_105e1eadb709d9ac] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setURA_8fd427ab23829bf5] = env->getMethodID(cls, "setURA", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSAlmanac::GPSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint GPSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_d6ab429752e7c267]);
            }

            jint GPSAlmanac::getSVN() const
            {
              return env->callIntMethod(this$, mids$[mid_getSVN_d6ab429752e7c267]);
            }

            jint GPSAlmanac::getSatConfiguration() const
            {
              return env->callIntMethod(this$, mids$[mid_getSatConfiguration_d6ab429752e7c267]);
            }

            ::java::lang::String GPSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_d2c8eb4129821f0e]));
            }

            jdouble GPSAlmanac::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_9981f74b2d109da6]);
            }

            jint GPSAlmanac::getURA() const
            {
              return env->callIntMethod(this$, mids$[mid_getURA_d6ab429752e7c267]);
            }

            void GPSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_8fd427ab23829bf5], a0);
            }

            void GPSAlmanac::setSVN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSVN_8fd427ab23829bf5], a0);
            }

            void GPSAlmanac::setSatConfiguration(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatConfiguration_8fd427ab23829bf5], a0);
            }

            void GPSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_105e1eadb709d9ac], a0.this$);
            }

            void GPSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_1ad26e8c8c0cd65b], a0);
            }

            void GPSAlmanac::setURA(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_8fd427ab23829bf5], a0);
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
            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data);
            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data);
            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GPSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_GPSAlmanac, health),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, sVN),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, satConfiguration),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, source),
              DECLARE_SET_FIELD(t_GPSAlmanac, sqrtA),
              DECLARE_GET_FIELD(t_GPSAlmanac, tGD),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GPSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GPSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSVN, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSatConfiguration, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSVN, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSatConfiguration, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSqrtA, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSAlmanac)[] = {
              { Py_tp_methods, t_GPSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GPSAlmanac_init_ },
              { Py_tp_getset, t_GPSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GPSAlmanac, t_GPSAlmanac, GPSAlmanac);

            void t_GPSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSAlmanac), &PY_TYPE_DEF(GPSAlmanac), module, "GPSAlmanac", 0);
            }

            void t_GPSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "class_", make_descriptor(GPSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "wrapfn_", make_descriptor(t_GPSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GPSAlmanac::wrap_Object(GPSAlmanac(((t_GPSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GPSAlmanac object((jobject) NULL);

              INT_CALL(object = GPSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSVN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSatConfiguration());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getURA());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSVN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSVN", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSatConfiguration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatConfiguration", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSVN());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSVN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sVN", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSatConfiguration());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSatConfiguration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satConfiguration", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getURA());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SingleLayerModelMappingFunction::class$ = NULL;
          jmethodID *SingleLayerModelMappingFunction::mids$ = NULL;
          bool SingleLayerModelMappingFunction::live$ = false;

          jclass SingleLayerModelMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_mappingFactor_bf28ed64d6e8576b] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_a3b854adede8eaaa] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          jdouble SingleLayerModelMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_bf28ed64d6e8576b], a0);
          }

          ::org::hipparchus::CalculusFieldElement SingleLayerModelMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_a3b854adede8eaaa], a0.this$));
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
          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args);

          static PyMethodDef t_SingleLayerModelMappingFunction__methods_[] = {
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleLayerModelMappingFunction)[] = {
            { Py_tp_methods, t_SingleLayerModelMappingFunction__methods_ },
            { Py_tp_init, (void *) t_SingleLayerModelMappingFunction_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleLayerModelMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleLayerModelMappingFunction, t_SingleLayerModelMappingFunction, SingleLayerModelMappingFunction);

          void t_SingleLayerModelMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleLayerModelMappingFunction), &PY_TYPE_DEF(SingleLayerModelMappingFunction), module, "SingleLayerModelMappingFunction", 0);
          }

          void t_SingleLayerModelMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "class_", make_descriptor(SingleLayerModelMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "wrapfn_", make_descriptor(t_SingleLayerModelMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 1)))
              return NULL;
            return t_SingleLayerModelMappingFunction::wrap_Object(SingleLayerModelMappingFunction(((t_SingleLayerModelMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SingleLayerModelMappingFunction object((jobject) NULL);

                INT_CALL(object = SingleLayerModelMappingFunction());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                SingleLayerModelMappingFunction object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SingleLayerModelMappingFunction(a0));
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

          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *AbstractMultivariateRealDistribution::class$ = NULL;
        jmethodID *AbstractMultivariateRealDistribution::mids$ = NULL;
        bool AbstractMultivariateRealDistribution::live$ = false;

        jclass AbstractMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_reseedRandomGenerator_f5bbab7e97879358] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_be783177b060994b] = env->getMethodID(cls, "sample", "()[D");
            mids$[mid_sample_45c1754ef74fe1b8] = env->getMethodID(cls, "sample", "(I)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractMultivariateRealDistribution::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        void AbstractMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_f5bbab7e97879358], a0);
        }

        JArray< jdouble > AbstractMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_be783177b060994b]));
        }

        JArray< JArray< jdouble > > AbstractMultivariateRealDistribution::sample(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_45c1754ef74fe1b8], a0));
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
        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self);
        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_AbstractMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMultivariateRealDistribution, dimension),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, reseedRandomGenerator, METH_O),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_AbstractMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultivariateRealDistribution, t_AbstractMultivariateRealDistribution, AbstractMultivariateRealDistribution);

        void t_AbstractMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultivariateRealDistribution), &PY_TYPE_DEF(AbstractMultivariateRealDistribution), module, "AbstractMultivariateRealDistribution", 0);
        }

        void t_AbstractMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "class_", make_descriptor(AbstractMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "wrapfn_", make_descriptor(t_AbstractMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractMultivariateRealDistribution::wrap_Object(AbstractMultivariateRealDistribution(((t_AbstractMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.sample());
              return result.wrap();
            }
            break;
           case 1:
            {
              jint a0;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.sample(a0));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sample", args);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixel::class$ = NULL;
        jmethodID *SensorPixel::mids$ = NULL;
        bool SensorPixel::live$ = false;

        jclass SensorPixel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLineNumber_9981f74b2d109da6] = env->getMethodID(cls, "getLineNumber", "()D");
            mids$[mid_getPixelNumber_9981f74b2d109da6] = env->getMethodID(cls, "getPixelNumber", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixel::SensorPixel(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble SensorPixel::getLineNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLineNumber_9981f74b2d109da6]);
        }

        jdouble SensorPixel::getPixelNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPixelNumber_9981f74b2d109da6]);
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
      namespace linesensor {
        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data);
        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data);
        static PyGetSetDef t_SensorPixel__fields_[] = {
          DECLARE_GET_FIELD(t_SensorPixel, lineNumber),
          DECLARE_GET_FIELD(t_SensorPixel, pixelNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorPixel__methods_[] = {
          DECLARE_METHOD(t_SensorPixel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, getLineNumber, METH_NOARGS),
          DECLARE_METHOD(t_SensorPixel, getPixelNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixel)[] = {
          { Py_tp_methods, t_SensorPixel__methods_ },
          { Py_tp_init, (void *) t_SensorPixel_init_ },
          { Py_tp_getset, t_SensorPixel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixel, t_SensorPixel, SensorPixel);

        void t_SensorPixel::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixel), &PY_TYPE_DEF(SensorPixel), module, "SensorPixel", 0);
        }

        void t_SensorPixel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "class_", make_descriptor(SensorPixel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "wrapfn_", make_descriptor(t_SensorPixel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixel::initializeClass, 1)))
            return NULL;
          return t_SensorPixel::wrap_Object(SensorPixel(((t_SensorPixel *) arg)->object.this$));
        }
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          SensorPixel object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = SensorPixel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLineNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLineNumber());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldEquinoctialOrbit::class$ = NULL;
      jmethodID *FieldEquinoctialOrbit::mids$ = NULL;
      bool FieldEquinoctialOrbit::live$ = false;

      jclass FieldEquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldEquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e61171636c74f2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_c3a72f5ae3d3099d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/EquinoctialOrbit;)V");
          mids$[mid_init$_0fcb30f8b968c16a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_cc80ec5d9d193ad9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_29a388389f8e2031] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_bfc63e9af3b225c7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b4fb0a8689671ebc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_210d5c728d3233b4] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_3130e338b3b4d904] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_3130e338b3b4d904] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_08d37e3f77b7239d] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_08d37e3f77b7239d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_08d37e3f77b7239d] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_08d37e3f77b7239d] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_08d37e3f77b7239d] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_1982048877fe3264] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_1982048877fe3264] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_08d37e3f77b7239d] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_08d37e3f77b7239d] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_08d37e3f77b7239d] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_eee3de00fe971136] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_3130e338b3b4d904] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_961dfa6b3c7ae677] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_25268c053b8f2df1] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_01a80caf3ab69696] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_toOrbit_1d03f68d0241dac0] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_3130e338b3b4d904] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPosition_d1b42a6748e907f9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3e61171636c74f2c, a0.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::EquinoctialOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c3a72f5ae3d3099d, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_0fcb30f8b968c16a, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cc80ec5d9d193ad9, a0.this$, a1.this$, a2.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_29a388389f8e2031, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_bfc63e9af3b225c7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b4fb0a8689671ebc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldEquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_210d5c728d3233b4], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_08d37e3f77b7239d]));
      }

      ::org::orekit::orbits::PositionAngleType FieldEquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_1982048877fe3264], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_1982048877fe3264], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_08d37e3f77b7239d]));
      }

      ::org::orekit::orbits::OrbitType FieldEquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean FieldEquinoctialOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_eee3de00fe971136]);
      }

      jboolean FieldEquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::removeRates() const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_961dfa6b3c7ae677]));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_25268c053b8f2df1], a0));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_01a80caf3ab69696], a0.this$));
      }

      ::org::orekit::orbits::EquinoctialOrbit FieldEquinoctialOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_1d03f68d0241dac0]));
      }

      ::java::lang::String FieldEquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args);
      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data);
      static PyGetSetDef t_FieldEquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, type),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldEquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquinoctialOrbit)[] = {
        { Py_tp_methods, t_FieldEquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldEquinoctialOrbit_init_ },
        { Py_tp_getset, t_FieldEquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldEquinoctialOrbit, t_FieldEquinoctialOrbit, FieldEquinoctialOrbit);
      PyObject *t_FieldEquinoctialOrbit::wrap_Object(const FieldEquinoctialOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquinoctialOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquinoctialOrbit), &PY_TYPE_DEF(FieldEquinoctialOrbit), module, "FieldEquinoctialOrbit", 0);
      }

      void t_FieldEquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "class_", make_descriptor(FieldEquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "wrapfn_", make_descriptor(t_FieldEquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldEquinoctialOrbit::wrap_Object(FieldEquinoctialOrbit(((t_FieldEquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::EquinoctialOrbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::EquinoctialOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self)
      {
        FieldEquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_3abecaf66215955c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;)Z");
                mids$[mid_valueOf_4bea02e7a2b89286] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");
                mids$[mid_values_2c310c9210f4f824] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_3abecaf66215955c], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4bea02e7a2b89286], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2c310c9210f4f824]));
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
          namespace cdm {
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
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
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetector::class$ = NULL;
        jmethodID *EventDetector::mids$ = NULL;
        bool EventDetector::live$ = false;

        jclass EventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_0e9e72f635f03ea9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_11bc47e1cbec1a87] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EventDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler EventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_0e9e72f635f03ea9]));
        }

        ::org::orekit::propagation::events::AdaptableInterval EventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_11bc47e1cbec1a87]));
        }

        jint EventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        jdouble EventDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_9981f74b2d109da6]);
        }

        void EventDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg);
        static PyObject *t_EventDetector_getHandler(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self);
        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self);
        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args);
        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data);
        static PyGetSetDef t_EventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetector, handler),
          DECLARE_GET_FIELD(t_EventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_EventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_EventDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetector__methods_[] = {
          DECLARE_METHOD(t_EventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, g, METH_O),
          DECLARE_METHOD(t_EventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetector)[] = {
          { Py_tp_methods, t_EventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetector, t_EventDetector, EventDetector);

        void t_EventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetector), &PY_TYPE_DEF(EventDetector), module, "EventDetector", 0);
        }

        void t_EventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "class_", make_descriptor(EventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "wrapfn_", make_descriptor(t_EventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetector::initializeClass, 1)))
            return NULL;
          return t_EventDetector::wrap_Object(EventDetector(((t_EventDetector *) arg)->object.this$));
        }
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_EventDetector_getHandler(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args)
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

        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_eb84deac0f960db9] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics NormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_eb84deac0f960db9], a0.this$));
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
      namespace gravity {
        namespace potential {
          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider, t_NormalizedSphericalHarmonicsProvider, NormalizedSphericalHarmonicsProvider);

          void t_NormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider), module, "NormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "NormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)));
          }

          void t_NormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider::wrap_Object(NormalizedSphericalHarmonicsProvider(((t_NormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisMessage::class$ = NULL;
              jmethodID *RtcmEphemerisMessage::mids$ = NULL;
              bool RtcmEphemerisMessage::live$ = false;

              jclass RtcmEphemerisMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_94db4776f517ece2] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;)V");
                  mids$[mid_getEphemerisData_33708c01dd7762c3] = env->getMethodID(cls, "getEphemerisData", "()Lorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisMessage::RtcmEphemerisMessage(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData & a1) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_94db4776f517ece2, a0, a1.this$)) {}

              ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData RtcmEphemerisMessage::getEphemerisData() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->callObjectMethod(this$, mids$[mid_getEphemerisData_33708c01dd7762c3]));
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args);
              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self);
              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data);
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data);
              static PyGetSetDef t_RtcmEphemerisMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, ephemerisData),
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, getEphemerisData, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisMessage)[] = {
                { Py_tp_methods, t_RtcmEphemerisMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisMessage_init_ },
                { Py_tp_getset, t_RtcmEphemerisMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisMessage, t_RtcmEphemerisMessage, RtcmEphemerisMessage);
              PyObject *t_RtcmEphemerisMessage::wrap_Object(const RtcmEphemerisMessage& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RtcmEphemerisMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RtcmEphemerisMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisMessage), &PY_TYPE_DEF(RtcmEphemerisMessage), module, "RtcmEphemerisMessage", 0);
              }

              void t_RtcmEphemerisMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "class_", make_descriptor(RtcmEphemerisMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "wrapfn_", make_descriptor(t_RtcmEphemerisMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisMessage::wrap_Object(RtcmEphemerisMessage(((t_RtcmEphemerisMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData a1((jobject) NULL);
                RtcmEphemerisMessage object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RtcmEphemerisMessage(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemerisData());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(result);
              }
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemerisData());
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(value);
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
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere2D::class$ = NULL;
        jmethodID *InterpolatingMicrosphere2D::mids$ = NULL;
        bool InterpolatingMicrosphere2D::live$ = false;

        jclass InterpolatingMicrosphere2D::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_copy_9a6b05bfe2798a99] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere2D::InterpolatingMicrosphere2D(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

        InterpolatingMicrosphere2D InterpolatingMicrosphere2D::copy() const
        {
          return InterpolatingMicrosphere2D(env->callObjectMethod(this$, mids$[mid_copy_9a6b05bfe2798a99]));
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
        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args);

        static PyMethodDef t_InterpolatingMicrosphere2D__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere2D)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere2D__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere2D_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere2D)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere2D, t_InterpolatingMicrosphere2D, InterpolatingMicrosphere2D);

        void t_InterpolatingMicrosphere2D::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere2D), &PY_TYPE_DEF(InterpolatingMicrosphere2D), module, "InterpolatingMicrosphere2D", 0);
        }

        void t_InterpolatingMicrosphere2D::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "class_", make_descriptor(InterpolatingMicrosphere2D::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere2D::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere2D::wrap_Object(InterpolatingMicrosphere2D(((t_InterpolatingMicrosphere2D *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          InterpolatingMicrosphere2D object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = InterpolatingMicrosphere2D(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args)
        {
          InterpolatingMicrosphere2D result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_InterpolatingMicrosphere2D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterpolatingMicrosphere2D), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *LimitAngle::class$ = NULL;
          jmethodID *LimitAngle::mids$ = NULL;
          bool LimitAngle::live$ = false;

          jclass LimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/LimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3444d777ecc41f4a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;ZD)V");
              mids$[mid_copySelf_80ab8fd71540f6fc] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_emptyHyperplane_ed9ca9b2055841e0] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_getLocation_17e56b7fbf0cddb5] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_getOffset_277cb62c4ec87155] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getReverse_80ab8fd71540f6fc] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_eee3de00fe971136] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_ff0c84956c63705d] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_sameOrientationAs_51737f919fe0cf72] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_ed9ca9b2055841e0] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_wholeSpace_04cfacb89407dcdc] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LimitAngle::LimitAngle(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3444d777ecc41f4a, a0.this$, a1, a2)) {}

          LimitAngle LimitAngle::copySelf() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_copySelf_80ab8fd71540f6fc]));
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_ed9ca9b2055841e0]));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point LimitAngle::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_getLocation_17e56b7fbf0cddb5]));
          }

          jdouble LimitAngle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_277cb62c4ec87155], a0.this$);
          }

          LimitAngle LimitAngle::getReverse() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_getReverse_80ab8fd71540f6fc]));
          }

          jdouble LimitAngle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
          }

          jboolean LimitAngle::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_eee3de00fe971136]);
          }

          ::org::hipparchus::geometry::Point LimitAngle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ff0c84956c63705d], a0.this$));
          }

          jboolean LimitAngle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_51737f919fe0cf72], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_ed9ca9b2055841e0]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet LimitAngle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_04cfacb89407dcdc]));
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
          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self);
          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self);
          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self);
          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self);
          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data);
          static PyGetSetDef t_LimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_LimitAngle, direct),
            DECLARE_GET_FIELD(t_LimitAngle, location),
            DECLARE_GET_FIELD(t_LimitAngle, reverse),
            DECLARE_GET_FIELD(t_LimitAngle, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LimitAngle__methods_[] = {
            DECLARE_METHOD(t_LimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getOffset, METH_O),
            DECLARE_METHOD(t_LimitAngle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, project, METH_O),
            DECLARE_METHOD(t_LimitAngle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_LimitAngle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LimitAngle)[] = {
            { Py_tp_methods, t_LimitAngle__methods_ },
            { Py_tp_init, (void *) t_LimitAngle_init_ },
            { Py_tp_getset, t_LimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LimitAngle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LimitAngle, t_LimitAngle, LimitAngle);

          void t_LimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(LimitAngle), &PY_TYPE_DEF(LimitAngle), module, "LimitAngle", 0);
          }

          void t_LimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "class_", make_descriptor(LimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "wrapfn_", make_descriptor(t_LimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LimitAngle::initializeClass, 1)))
              return NULL;
            return t_LimitAngle::wrap_Object(LimitAngle(((t_LimitAngle *) arg)->object.this$));
          }
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            LimitAngle object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LimitAngle(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data)
          {
            LimitAngle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_LimitAngle::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *FieldODEIntegratorBuilder::mids$ = NULL;
        bool FieldODEIntegratorBuilder::live$ = false;

        jclass FieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_d2b5a7210d9a6d44] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_d2b5a7210d9a6d44], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
      namespace conversion {
        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_FieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_FieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEIntegratorBuilder, t_FieldODEIntegratorBuilder, FieldODEIntegratorBuilder);
        PyObject *t_FieldODEIntegratorBuilder::wrap_Object(const FieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEIntegratorBuilder), &PY_TYPE_DEF(FieldODEIntegratorBuilder), module, "FieldODEIntegratorBuilder", 0);
        }

        void t_FieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "class_", make_descriptor(FieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_FieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_FieldODEIntegratorBuilder::wrap_Object(FieldODEIntegratorBuilder(((t_FieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CelestialBodyFrame::class$ = NULL;
          jmethodID *CelestialBodyFrame::mids$ = NULL;
          bool CelestialBodyFrame::live$ = false;
          CelestialBodyFrame *CelestialBodyFrame::EME2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GCRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GRC = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GTOD = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ICRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1988 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1989 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1990 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1991 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1992 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1993 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1994 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1996 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1997 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2005 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2008 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2014 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2020 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::J2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::MCI = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TDR = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TEME = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TOD = NULL;

          jclass CelestialBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CelestialBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_74125e1460667e23] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;)Lorg/orekit/frames/Frame;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_guessFrame_cfd059ac9cccd443] = env->getStaticMethodID(cls, "guessFrame", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_0f6554314d1f10c6] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_parse_8ccd910a1b9ca82a] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_valueOf_8ccd910a1b9ca82a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_values_cf0bd0902c088c26] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EME2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GCRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GRC = new CelestialBodyFrame(env->getStaticObjectField(cls, "GRC", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GTOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ICRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1988 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1988", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1989 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1989", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1990 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1990", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1991 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1991", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1992 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1992", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1993 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1993", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1994 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1994", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1996 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1996", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1997 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1997", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2005 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2005", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2008 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2008", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2014 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2014", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2020 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2020", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              J2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              MCI = new CelestialBodyFrame(env->getStaticObjectField(cls, "MCI", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TDR = new CelestialBodyFrame(env->getStaticObjectField(cls, "TDR", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TEME = new CelestialBodyFrame(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame CelestialBodyFrame::getFrame(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::data::DataContext & a2) const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_74125e1460667e23], a0.this$, a1, a2.this$));
          }

          ::java::lang::String CelestialBodyFrame::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          ::java::lang::String CelestialBodyFrame::guessFrame(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessFrame_cfd059ac9cccd443], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_map_0f6554314d1f10c6], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_8ccd910a1b9ca82a], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8ccd910a1b9ca82a], a0.this$));
          }

          JArray< CelestialBodyFrame > CelestialBodyFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CelestialBodyFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_cf0bd0902c088c26]));
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
          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self);
          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type);
          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data);
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data);
          static PyGetSetDef t_CelestialBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_CelestialBodyFrame, name),
            DECLARE_GET_FIELD(t_CelestialBodyFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CelestialBodyFrame__methods_[] = {
            DECLARE_METHOD(t_CelestialBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getName, METH_NOARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, guessFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFrame)[] = {
            { Py_tp_methods, t_CelestialBodyFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CelestialBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CelestialBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CelestialBodyFrame, t_CelestialBodyFrame, CelestialBodyFrame);
          PyObject *t_CelestialBodyFrame::wrap_Object(const CelestialBodyFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CelestialBodyFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CelestialBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(CelestialBodyFrame), &PY_TYPE_DEF(CelestialBodyFrame), module, "CelestialBodyFrame", 0);
          }

          void t_CelestialBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "class_", make_descriptor(CelestialBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "wrapfn_", make_descriptor(t_CelestialBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(CelestialBodyFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "EME2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::EME2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GCRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GCRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GRC", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GRC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GTOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GTOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ICRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ICRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1988", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1988)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1989", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1989)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1990", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1990)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1991", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1991)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1992", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1993", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1993)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1994", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1994)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1996", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1997", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2005", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2008", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2014", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2020", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "J2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::J2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "MCI", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::MCI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TDR", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TDR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TEME", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TEME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TOD)));
          }

          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CelestialBodyFrame::initializeClass, 1)))
              return NULL;
            return t_CelestialBodyFrame::wrap_Object(CelestialBodyFrame(((t_CelestialBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CelestialBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::data::DataContext a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getFrame(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFrame", args);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::guessFrame(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessFrame", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::map(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::parse(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::valueOf(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type)
          {
            JArray< CelestialBodyFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::values());
            return JArray<jobject>(result.this$).wrap(t_CelestialBodyFrame::wrap_jobject);
          }
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data)
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
