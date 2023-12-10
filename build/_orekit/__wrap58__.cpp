#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *FrameFacade::class$ = NULL;
          jmethodID *FrameFacade::mids$ = NULL;
          bool FrameFacade::live$ = false;

          jclass FrameFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/FrameFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9e70ffc025cdf925] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;Ljava/lang/String;)V");
              mids$[mid_asCelestialBodyFrame_d0abc16340ab4d13] = env->getMethodID(cls, "asCelestialBodyFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_asFrame_b86f9f61d97a7244] = env->getMethodID(cls, "asFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_asOrbitRelativeFrame_65b7b6f762019366] = env->getMethodID(cls, "asOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_asSpacecraftBodyFrame_630d91cd1f29802e] = env->getMethodID(cls, "asSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTransform_c498c028eaedca67] = env->getStaticMethodID(cls, "getTransform", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/frames/Transform;");
              mids$[mid_map_1a943e9a4fa03361] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_parse_86197fd144e503ce] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;ZZZ)Lorg/orekit/files/ccsds/definitions/FrameFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FrameFacade::FrameFacade(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame & a2, const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e70ffc025cdf925, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame FrameFacade::asCelestialBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_asCelestialBodyFrame_d0abc16340ab4d13]));
          }

          ::org::orekit::frames::Frame FrameFacade::asFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_asFrame_b86f9f61d97a7244]));
          }

          ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame FrameFacade::asOrbitRelativeFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_asOrbitRelativeFrame_65b7b6f762019366]));
          }

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame FrameFacade::asSpacecraftBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_asSpacecraftBodyFrame_630d91cd1f29802e]));
          }

          ::java::lang::String FrameFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          ::org::orekit::frames::Transform FrameFacade::getTransform(const FrameFacade & a0, const FrameFacade & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_c498c028eaedca67], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          FrameFacade FrameFacade::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_map_1a943e9a4fa03361], a0.this$));
          }

          FrameFacade FrameFacade::parse(const ::java::lang::String & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2, const ::org::orekit::data::DataContext & a3, jboolean a4, jboolean a5, jboolean a6)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_86197fd144e503ce], a0.this$, a1.this$, a2, a3.this$, a4, a5, a6));
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
          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getName(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data);
          static PyGetSetDef t_FrameFacade__fields_[] = {
            DECLARE_GET_FIELD(t_FrameFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FrameFacade__methods_[] = {
            DECLARE_METHOD(t_FrameFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, asCelestialBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asOrbitRelativeFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asSpacecraftBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, parse, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FrameFacade)[] = {
            { Py_tp_methods, t_FrameFacade__methods_ },
            { Py_tp_init, (void *) t_FrameFacade_init_ },
            { Py_tp_getset, t_FrameFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FrameFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FrameFacade, t_FrameFacade, FrameFacade);

          void t_FrameFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(FrameFacade), &PY_TYPE_DEF(FrameFacade), module, "FrameFacade", 0);
          }

          void t_FrameFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "class_", make_descriptor(FrameFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "wrapfn_", make_descriptor(t_FrameFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FrameFacade::initializeClass, 1)))
              return NULL;
            return t_FrameFacade::wrap_Object(FrameFacade(((t_FrameFacade *) arg)->object.this$));
          }
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FrameFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            FrameFacade object((jobject) NULL);

            if (!parseArgs(args, "kKKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::initializeClass, ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &p2, ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::parameters_, &a3, &a4))
            {
              INT_CALL(object = FrameFacade(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asCelestialBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.asFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asOrbitRelativeFrame());
            return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asSpacecraftBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_getName(t_FrameFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args)
          {
            FrameFacade a0((jobject) NULL);
            FrameFacade a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkkk", FrameFacade::initializeClass, FrameFacade::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::getTransform(a0, a1, a2, a3, a4));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameFacade result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::map(a0));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            jboolean a4;
            jboolean a5;
            jboolean a6;
            FrameFacade result((jobject) NULL);

            if (!parseArgs(args, "sKZkZZZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::parse(a0, a1, a2, a3, a4, a5, a6));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data)
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
#include "org/orekit/data/TruncatingFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *TruncatingFilter::class$ = NULL;
      jmethodID *TruncatingFilter::mids$ = NULL;
      bool TruncatingFilter::live$ = false;

      jclass TruncatingFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/TruncatingFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_filter_716adf7a6da8b4d7] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TruncatingFilter::TruncatingFilter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      ::org::orekit::data::DataSource TruncatingFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_716adf7a6da8b4d7], a0.this$));
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
      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg);

      static PyMethodDef t_TruncatingFilter__methods_[] = {
        DECLARE_METHOD(t_TruncatingFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TruncatingFilter)[] = {
        { Py_tp_methods, t_TruncatingFilter__methods_ },
        { Py_tp_init, (void *) t_TruncatingFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TruncatingFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TruncatingFilter, t_TruncatingFilter, TruncatingFilter);

      void t_TruncatingFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(TruncatingFilter), &PY_TYPE_DEF(TruncatingFilter), module, "TruncatingFilter", 0);
      }

      void t_TruncatingFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "class_", make_descriptor(TruncatingFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "wrapfn_", make_descriptor(t_TruncatingFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TruncatingFilter::initializeClass, 1)))
          return NULL;
        return t_TruncatingFilter::wrap_Object(TruncatingFilter(((t_TruncatingFilter *) arg)->object.this$));
      }
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TruncatingFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        TruncatingFilter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = TruncatingFilter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *Acm::class$ = NULL;
              jmethodID *Acm::mids$ = NULL;
              bool Acm::live$ = false;
              ::java::lang::String *Acm::ATT_LINE = NULL;
              ::java::lang::String *Acm::COV_LINE = NULL;
              ::java::lang::String *Acm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Acm::ROOT = NULL;
              ::java::lang::String *Acm::UNKNOWN_OBJECT = NULL;

              jclass Acm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/Acm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_61c8f32249f88749] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getData_c85893d17909e463] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmData;");
                  mids$[mid_getMetadata_cadb0f9af36b4813] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;");
                  mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "ATT_LINE", "Ljava/lang/String;"));
                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Acm::Acm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_61c8f32249f88749, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmData Acm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmData(env->callObjectMethod(this$, mids$[mid_getData_c85893d17909e463]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata Acm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_cadb0f9af36b4813]));
              }

              ::java::util::Map Acm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
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
            namespace acm {
              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args);
              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Acm_getData(t_Acm *self);
              static PyObject *t_Acm_getMetadata(t_Acm *self);
              static PyObject *t_Acm_getSatellites(t_Acm *self);
              static PyObject *t_Acm_get__data(t_Acm *self, void *data);
              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data);
              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data);
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data);
              static PyGetSetDef t_Acm__fields_[] = {
                DECLARE_GET_FIELD(t_Acm, data),
                DECLARE_GET_FIELD(t_Acm, metadata),
                DECLARE_GET_FIELD(t_Acm, satellites),
                DECLARE_GET_FIELD(t_Acm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Acm__methods_[] = {
                DECLARE_METHOD(t_Acm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Acm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Acm)[] = {
                { Py_tp_methods, t_Acm__methods_ },
                { Py_tp_init, (void *) t_Acm_init_ },
                { Py_tp_getset, t_Acm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Acm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Acm, t_Acm, Acm);
              PyObject *t_Acm::wrap_Object(const Acm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Acm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Acm::install(PyObject *module)
              {
                installType(&PY_TYPE(Acm), &PY_TYPE_DEF(Acm), module, "Acm", 0);
              }

              void t_Acm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "class_", make_descriptor(Acm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "wrapfn_", make_descriptor(t_Acm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Acm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ATT_LINE", make_descriptor(j2p(*Acm::ATT_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "COV_LINE", make_descriptor(j2p(*Acm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Acm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ROOT", make_descriptor(j2p(*Acm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Acm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Acm::initializeClass, 1)))
                  return NULL;
                return t_Acm::wrap_Object(Acm(((t_Acm *) arg)->object.this$));
              }
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Acm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Acm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Acm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Acm_getData(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(result);
              }

              static PyObject *t_Acm_getMetadata(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Acm_getSatellites(t_Acm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmSatelliteEphemeris));
              }
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Acm_get__data(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(value);
              }

              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonFieldIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegrator::mids$ = NULL;
        bool AdamsMoultonFieldIntegrator::live$ = false;

        jclass AdamsMoultonFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7f69364f82b72251] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_b6677f3cac38e98d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_41f9dcc5eb20f1cb] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_cf78fb7ef1b60a21] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7f69364f82b72251, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b6677f3cac38e98d, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegrator, t_AdamsMoultonFieldIntegrator, AdamsMoultonFieldIntegrator);
        PyObject *t_AdamsMoultonFieldIntegrator::wrap_Object(const AdamsMoultonFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegrator), &PY_TYPE_DEF(AdamsMoultonFieldIntegrator), module, "AdamsMoultonFieldIntegrator", 0);
        }

        void t_AdamsMoultonFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "class_", make_descriptor(AdamsMoultonFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegrator::wrap_Object(AdamsMoultonFieldIntegrator(((t_AdamsMoultonFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/TwoDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *TwoDVariation::class$ = NULL;
        jmethodID *TwoDVariation::mids$ = NULL;
        bool TwoDVariation::live$ = false;

        jclass TwoDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/TwoDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_767b7bd01dce10cd] = env->getMethodID(cls, "<init>", "(DDD[[D)V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TwoDVariation::TwoDVariation(jdouble a0, jdouble a1, jdouble a2, const JArray< JArray< jdouble > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_767b7bd01dce10cd, a0, a1, a2, a3.this$)) {}

        jdouble TwoDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
      namespace antenna {
        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args);

        static PyMethodDef t_TwoDVariation__methods_[] = {
          DECLARE_METHOD(t_TwoDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TwoDVariation)[] = {
          { Py_tp_methods, t_TwoDVariation__methods_ },
          { Py_tp_init, (void *) t_TwoDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TwoDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TwoDVariation, t_TwoDVariation, TwoDVariation);

        void t_TwoDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(TwoDVariation), &PY_TYPE_DEF(TwoDVariation), module, "TwoDVariation", 0);
        }

        void t_TwoDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "class_", make_descriptor(TwoDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "wrapfn_", make_descriptor(t_TwoDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TwoDVariation::initializeClass, 1)))
            return NULL;
          return t_TwoDVariation::wrap_Object(TwoDVariation(((t_TwoDVariation *) arg)->object.this$));
        }
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TwoDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          JArray< JArray< jdouble > > a3((jobject) NULL);
          TwoDVariation object((jobject) NULL);

          if (!parseArgs(args, "DDD[[D", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = TwoDVariation(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter::class$ = NULL;
      jmethodID *GaussianCurveFitter::mids$ = NULL;
      bool GaussianCurveFitter::live$ = false;

      jclass GaussianCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_8881ea96d07001b1] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withMaxIterations_0b3ca76896ccd5a4] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withStartPoint_972ad18b5e18ab89] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_getProblem_c197708a453e8034] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter GaussianCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return GaussianCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_8881ea96d07001b1]));
      }

      GaussianCurveFitter GaussianCurveFitter::withMaxIterations(jint a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_0b3ca76896ccd5a4], a0));
      }

      GaussianCurveFitter GaussianCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_972ad18b5e18ab89], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type);
      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg);

      static PyMethodDef t_GaussianCurveFitter__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_GaussianCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter)[] = {
        { Py_tp_methods, t_GaussianCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter, t_GaussianCurveFitter, GaussianCurveFitter);

      void t_GaussianCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter), &PY_TYPE_DEF(GaussianCurveFitter), module, "GaussianCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser)));
      }

      void t_GaussianCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "class_", make_descriptor(GaussianCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "wrapfn_", make_descriptor(t_GaussianCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter::wrap_Object(GaussianCurveFitter(((t_GaussianCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type)
      {
        GaussianCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::GaussianCurveFitter::create());
        return t_GaussianCurveFitter::wrap_Object(result);
      }

      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg)
      {
        jint a0;
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SphereGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphereGenerator::class$ = NULL;
          jmethodID *SphereGenerator::mids$ = NULL;
          bool SphereGenerator::live$ = false;

          jclass SphereGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphereGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_8eaea97b2dcfeb64] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphereGenerator::SphereGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphereGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_8eaea97b2dcfeb64], a0.this$));
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
        namespace threed {
          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg);

          static PyMethodDef t_SphereGenerator__methods_[] = {
            DECLARE_METHOD(t_SphereGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphereGenerator)[] = {
            { Py_tp_methods, t_SphereGenerator__methods_ },
            { Py_tp_init, (void *) t_SphereGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphereGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphereGenerator, t_SphereGenerator, SphereGenerator);

          void t_SphereGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(SphereGenerator), &PY_TYPE_DEF(SphereGenerator), module, "SphereGenerator", 0);
          }

          void t_SphereGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "class_", make_descriptor(SphereGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "wrapfn_", make_descriptor(t_SphereGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphereGenerator::initializeClass, 1)))
              return NULL;
            return t_SphereGenerator::wrap_Object(SphereGenerator(((t_SphereGenerator *) arg)->object.this$));
          }
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphereGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds)
          {
            SphereGenerator object((jobject) NULL);

            INT_CALL(object = SphereGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D), ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ$BesselJResult::class$ = NULL;
      jmethodID *BesselJ$BesselJResult::mids$ = NULL;
      bool BesselJ$BesselJResult::live$ = false;

      jclass BesselJ$BesselJResult::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ$BesselJResult");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_338593130772139f] = env->getMethodID(cls, "<init>", "([DI)V");
          mids$[mid_getVals_60c7040667a7dc5c] = env->getMethodID(cls, "getVals", "()[D");
          mids$[mid_getnVals_570ce0828f81a2c1] = env->getMethodID(cls, "getnVals", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ$BesselJResult::BesselJ$BesselJResult(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_338593130772139f, a0.this$, a1)) {}

      JArray< jdouble > BesselJ$BesselJResult::getVals() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVals_60c7040667a7dc5c]));
      }

      jint BesselJ$BesselJResult::getnVals() const
      {
        return env->callIntMethod(this$, mids$[mid_getnVals_570ce0828f81a2c1]);
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
      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data);
      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data);
      static PyGetSetDef t_BesselJ$BesselJResult__fields_[] = {
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, nVals),
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, vals),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BesselJ$BesselJResult__methods_[] = {
        DECLARE_METHOD(t_BesselJ$BesselJResult, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getVals, METH_NOARGS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getnVals, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ$BesselJResult)[] = {
        { Py_tp_methods, t_BesselJ$BesselJResult__methods_ },
        { Py_tp_init, (void *) t_BesselJ$BesselJResult_init_ },
        { Py_tp_getset, t_BesselJ$BesselJResult__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ$BesselJResult)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ$BesselJResult, t_BesselJ$BesselJResult, BesselJ$BesselJResult);

      void t_BesselJ$BesselJResult::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ$BesselJResult), &PY_TYPE_DEF(BesselJ$BesselJResult), module, "BesselJ$BesselJResult", 0);
      }

      void t_BesselJ$BesselJResult::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "class_", make_descriptor(BesselJ$BesselJResult::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "wrapfn_", make_descriptor(t_BesselJ$BesselJResult::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ$BesselJResult::initializeClass, 1)))
          return NULL;
        return t_BesselJ$BesselJResult::wrap_Object(BesselJ$BesselJResult(((t_BesselJ$BesselJResult *) arg)->object.this$));
      }
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ$BesselJResult::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        BesselJ$BesselJResult object((jobject) NULL);

        if (!parseArgs(args, "[DI", &a0, &a1))
        {
          INT_CALL(object = BesselJ$BesselJResult(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVals());
        return result.wrap();
      }

      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getnVals());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getnVals());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVals());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::live$ = false;

        jclass OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b0f98f30412f2bf0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/frames/Frame;Lorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getAngularCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_f95b60a986adb964] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_11b109bd155ca898] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0f98f30412f2bf0, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_2afa36052df4765d]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_f95b60a986adb964]));
        }

        ::org::orekit::utils::AngularDerivativesFilter OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c]));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_11b109bd155ca898]));
        }

        jint OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        ::org::orekit::frames::Frame OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, angularCoordinates),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, attitudeProvider),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationMethod),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, referenceFrame),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAngularCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationMethod, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getReferenceFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment);

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), module, "OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(((t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::frames::Frame a3((jobject) NULL);
          ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KsIkK", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolationMethod());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolationMethod());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodFacade::class$ = NULL;
          jmethodID *PocMethodFacade::mids$ = NULL;
          bool PocMethodFacade::live$ = false;

          jclass PocMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1f61cf533872efd7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/PocMethodType;)V");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getType_7f289a825954eeb4] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_parse_85cab22e5e251add] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PocMethodFacade::PocMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::PocMethodType & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f61cf533872efd7, a0.this$, a1.this$)) {}

          ::java::lang::String PocMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          ::org::orekit::files::ccsds::definitions::PocMethodType PocMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getType_7f289a825954eeb4]));
          }

          PocMethodFacade PocMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_85cab22e5e251add], a0.this$));
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
          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data);
          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data);
          static PyGetSetDef t_PocMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodFacade, name),
            DECLARE_GET_FIELD(t_PocMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodFacade__methods_[] = {
            DECLARE_METHOD(t_PocMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodFacade)[] = {
            { Py_tp_methods, t_PocMethodFacade__methods_ },
            { Py_tp_init, (void *) t_PocMethodFacade_init_ },
            { Py_tp_getset, t_PocMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PocMethodFacade, t_PocMethodFacade, PocMethodFacade);

          void t_PocMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodFacade), &PY_TYPE_DEF(PocMethodFacade), module, "PocMethodFacade", 0);
          }

          void t_PocMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "class_", make_descriptor(PocMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "wrapfn_", make_descriptor(t_PocMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodFacade::initializeClass, 1)))
              return NULL;
            return t_PocMethodFacade::wrap_Object(PocMethodFacade(((t_PocMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::PocMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            PocMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::definitions::PocMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_PocMethodType::parameters_))
            {
              INT_CALL(object = PocMethodFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodFacade::parse(a0));
              return t_PocMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Double.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateRealDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateRealDistribution::mids$ = NULL;
        bool MixtureMultivariateRealDistribution::live$ = false;

        jclass MixtureMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_a3d6463b27f37fbe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_density_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getComponents_2afa36052df4765d] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_60c7040667a7dc5c] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a3d6463b27f37fbe, a0.this$, a1.this$)) {}

        jdouble MixtureMultivariateRealDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_9dc1ec0bcc0a9a29], a0.this$);
        }

        ::java::util::List MixtureMultivariateRealDistribution::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_2afa36052df4765d]));
        }

        void MixtureMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20], a0);
        }

        JArray< jdouble > MixtureMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_60c7040667a7dc5c]));
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
        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self);
        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, components),
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, of_, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, reseedRandomGenerator, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateRealDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateRealDistribution, t_MixtureMultivariateRealDistribution, MixtureMultivariateRealDistribution);
        PyObject *t_MixtureMultivariateRealDistribution::wrap_Object(const MixtureMultivariateRealDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateRealDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateRealDistribution), &PY_TYPE_DEF(MixtureMultivariateRealDistribution), module, "MixtureMultivariateRealDistribution", 0);
        }

        void t_MixtureMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "class_", make_descriptor(MixtureMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateRealDistribution::wrap_Object(MixtureMultivariateRealDistribution(((t_MixtureMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0, a1));
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

        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "reseedRandomGenerator", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "sample", args, 2);
        }
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Data::class$ = NULL;
          jmethodID *Data::mids$ = NULL;
          bool Data::live$ = false;

          jclass Data::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Data");

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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Data__methods_[] = {
            DECLARE_METHOD(t_Data, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Data, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Data)[] = {
            { Py_tp_methods, t_Data__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Data)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Section),
            NULL
          };

          DEFINE_TYPE(Data, t_Data, Data);

          void t_Data::install(PyObject *module)
          {
            installType(&PY_TYPE(Data), &PY_TYPE_DEF(Data), module, "Data", 0);
          }

          void t_Data::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "class_", make_descriptor(Data::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "wrapfn_", make_descriptor(t_Data::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Data::initializeClass, 1)))
              return NULL;
            return t_Data::wrap_Object(Data(((t_Data *) arg)->object.this$));
          }
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Data::initializeClass, 0))
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DateConsumer::class$ = NULL;
            jmethodID *ParseToken$DateConsumer::mids$ = NULL;
            bool ParseToken$DateConsumer::live$ = false;

            jclass ParseToken$DateConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_600a2a61652bc473] = env->getMethodID(cls, "accept", "(Lorg/orekit/time/AbsoluteDate;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DateConsumer::accept(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_600a2a61652bc473], a0.this$);
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
            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DateConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DateConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DateConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DateConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DateConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DateConsumer, t_ParseToken$DateConsumer, ParseToken$DateConsumer);

            void t_ParseToken$DateConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DateConsumer), &PY_TYPE_DEF(ParseToken$DateConsumer), module, "ParseToken$DateConsumer", 0);
            }

            void t_ParseToken$DateConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "class_", make_descriptor(ParseToken$DateConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "wrapfn_", make_descriptor(t_ParseToken$DateConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DateConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DateConsumer::wrap_Object(ParseToken$DateConsumer(((t_ParseToken$DateConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DateConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EulerFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerFieldIntegrator::class$ = NULL;
        jmethodID *EulerFieldIntegrator::mids$ = NULL;
        bool EulerFieldIntegrator::live$ = false;

        jclass EulerFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79b17d518528c1b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_7da9071d20e103ea] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegrator::EulerFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_79b17d518528c1b2, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > EulerFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
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
        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args);
        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data);
        static PyGetSetDef t_EulerFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, a),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, b),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, c),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegrator)[] = {
          { Py_tp_methods, t_EulerFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegrator_init_ },
          { Py_tp_getset, t_EulerFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegrator, t_EulerFieldIntegrator, EulerFieldIntegrator);
        PyObject *t_EulerFieldIntegrator::wrap_Object(const EulerFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegrator), &PY_TYPE_DEF(EulerFieldIntegrator), module, "EulerFieldIntegrator", 0);
        }

        void t_EulerFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "class_", make_descriptor(EulerFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "wrapfn_", make_descriptor(t_EulerFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegrator::wrap_Object(EulerFieldIntegrator(((t_EulerFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          EulerFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = EulerFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ButcherArrayProvider::class$ = NULL;
        jmethodID *ButcherArrayProvider::mids$ = NULL;
        bool ButcherArrayProvider::live$ = false;

        jclass ButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< jdouble > > ButcherArrayProvider::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > ButcherArrayProvider::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > ButcherArrayProvider::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
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
        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data);
        static PyGetSetDef t_ButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_ButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_ButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ButcherArrayProvider)[] = {
          { Py_tp_methods, t_ButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ButcherArrayProvider, t_ButcherArrayProvider, ButcherArrayProvider);

        void t_ButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(ButcherArrayProvider), &PY_TYPE_DEF(ButcherArrayProvider), module, "ButcherArrayProvider", 0);
        }

        void t_ButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "class_", make_descriptor(ButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "wrapfn_", make_descriptor(t_ButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_ButcherArrayProvider::wrap_Object(ButcherArrayProvider(((t_ButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadataKey::mids$ = NULL;
              bool OrbitManeuverHistoryMetadataKey::live$ = false;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::COMMENT = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_START = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_DIR = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_TIME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TYPE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PURPOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_UNITS = NULL;

              jclass OrbitManeuverHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_a0d94c23b7cd79a8] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;)Z");
                  mids$[mid_valueOf_1f13a955bddde1e7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");
                  mids$[mid_values_ce4b5db5f19ff39e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_TRIGGER = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_TRIGGER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_START = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_START", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_STOP = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_STOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MAX_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MAX_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MIN_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MIN_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_START_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_START_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_STOP_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_STOP_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_DIR = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_DIR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_TIME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_DURATION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_PERIOD = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_PERIOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TYPE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_CLOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_CLOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_OPEN = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_OPEN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  GRAV_ASSIST_NAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "GRAV_ASSIST_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_COMPOSITION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_COMPOSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_DEVICE_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_DEVICE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_FRAME_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PRED_SOURCE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PRED_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PURPOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_REF_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_UNITS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitManeuverHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_a0d94c23b7cd79a8], a0.this$, a1.this$, a2.this$);
              }

              OrbitManeuverHistoryMetadataKey OrbitManeuverHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitManeuverHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1f13a955bddde1e7], a0.this$));
              }

              JArray< OrbitManeuverHistoryMetadataKey > OrbitManeuverHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitManeuverHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ce4b5db5f19ff39e]));
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
              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadataKey, t_OrbitManeuverHistoryMetadataKey, OrbitManeuverHistoryMetadataKey);
              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_Object(const OrbitManeuverHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitManeuverHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadataKey), &PY_TYPE_DEF(OrbitManeuverHistoryMetadataKey), module, "OrbitManeuverHistoryMetadataKey", 0);
              }

              void t_OrbitManeuverHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "class_", make_descriptor(OrbitManeuverHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_TRIGGER", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_START", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_STOP", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MAX_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MIN_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_START_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_STOP_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_DIR", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_TIME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_DURATION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_PERIOD", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TYPE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_CLOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_OPEN", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "GRAV_ASSIST_NAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_COMPOSITION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_DEVICE_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_FRAME_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PRED_SOURCE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PURPOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_REF_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_UNITS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_UNITS)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadataKey::wrap_Object(OrbitManeuverHistoryMetadataKey(((t_OrbitManeuverHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitManeuverHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::valueOf(a0));
                  return t_OrbitManeuverHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitManeuverHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitManeuverHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/gnss/attitude/Glonass.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Glonass::class$ = NULL;
        jmethodID *Glonass::mids$ = NULL;
        bool Glonass::live$ = false;
        jdouble Glonass::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Glonass::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Glonass");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ffdc3ec10e7d4912] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Glonass::Glonass(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_ffdc3ec10e7d4912, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace attitude {
        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Glonass__methods_[] = {
          DECLARE_METHOD(t_Glonass, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Glonass, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Glonass)[] = {
          { Py_tp_methods, t_Glonass__methods_ },
          { Py_tp_init, (void *) t_Glonass_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Glonass)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Glonass, t_Glonass, Glonass);

        void t_Glonass::install(PyObject *module)
        {
          installType(&PY_TYPE(Glonass), &PY_TYPE_DEF(Glonass), module, "Glonass", 0);
        }

        void t_Glonass::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "class_", make_descriptor(Glonass::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "wrapfn_", make_descriptor(t_Glonass::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "boxfn_", make_descriptor(boxObject));
          env->getClass(Glonass::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "DEFAULT_YAW_RATE", make_descriptor(Glonass::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Glonass::initializeClass, 1)))
            return NULL;
          return t_Glonass::wrap_Object(Glonass(((t_Glonass *) arg)->object.this$));
        }
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Glonass::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Glonass object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Glonass(a0, a1, a2, a3, a4));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Mean::class$ = NULL;
          jmethodID *Mean::mids$ = NULL;
          bool Mean::live$ = false;

          jclass Mean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Mean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_a3de77dcfa83aed2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");
              mids$[mid_aggregate_432a3abb0caaadf9] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Mean;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_7b8896d94cfe5ea9] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Mean;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_2634be61548fc62b] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Mean::Mean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          Mean::Mean(const ::org::hipparchus::stat::descriptive::moment::FirstMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a3de77dcfa83aed2, a0.this$)) {}

          void Mean::aggregate(const Mean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_432a3abb0caaadf9], a0.this$);
          }

          void Mean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Mean Mean::copy() const
          {
            return Mean(env->callObjectMethod(this$, mids$[mid_copy_7b8896d94cfe5ea9]));
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_2634be61548fc62b], a0.this$, a1.this$, a2, a3);
          }

          jlong Mean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Mean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Mean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
        namespace moment {
          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg);
          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_get__n(t_Mean *self, void *data);
          static PyObject *t_Mean_get__result(t_Mean *self, void *data);
          static PyGetSetDef t_Mean__fields_[] = {
            DECLARE_GET_FIELD(t_Mean, n),
            DECLARE_GET_FIELD(t_Mean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mean__methods_[] = {
            DECLARE_METHOD(t_Mean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, aggregate, METH_O),
            DECLARE_METHOD(t_Mean, clear, METH_VARARGS),
            DECLARE_METHOD(t_Mean, copy, METH_VARARGS),
            DECLARE_METHOD(t_Mean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getN, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Mean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mean)[] = {
            { Py_tp_methods, t_Mean__methods_ },
            { Py_tp_init, (void *) t_Mean_init_ },
            { Py_tp_getset, t_Mean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Mean, t_Mean, Mean);

          void t_Mean::install(PyObject *module)
          {
            installType(&PY_TYPE(Mean), &PY_TYPE_DEF(Mean), module, "Mean", 0);
          }

          void t_Mean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "class_", make_descriptor(Mean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "wrapfn_", make_descriptor(t_Mean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mean::initializeClass, 1)))
              return NULL;
            return t_Mean::wrap_Object(Mean(((t_Mean *) arg)->object.this$));
          }
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Mean object((jobject) NULL);

                INT_CALL(object = Mean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::FirstMoment a0((jobject) NULL);
                Mean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::FirstMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Mean(a0));
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

          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg)
          {
            Mean a0((jobject) NULL);

            if (!parseArg(arg, "k", Mean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args)
          {
            Mean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Mean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args)
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

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Mean_get__n(t_Mean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Mean_get__result(t_Mean *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/AdamsFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsFieldIntegrator::class$ = NULL;
        jmethodID *AdamsFieldIntegrator::mids$ = NULL;
        bool AdamsFieldIntegrator::live$ = false;

        jclass AdamsFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e1ecee2c65e08f00] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_3019bf1e0a456e3e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_d8a6319aba9a7b17] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_e3fbb99b5c5aabb2] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_ecf8fc9f38ab7a9d] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_8a387f2c5f491083] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_errorEstimation_41f9dcc5eb20f1cb] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_cf78fb7ef1b60a21] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, const JArray< jdouble > & a6, const JArray< jdouble > & a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e1ecee2c65e08f00, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$, a7.this$)) {}

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3019bf1e0a456e3e, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::ode::FieldODEStateAndDerivative AdamsFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_d8a6319aba9a7b17], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsFieldIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_e3fbb99b5c5aabb2], a0.this$));
        }

        void AdamsFieldIntegrator::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_ecf8fc9f38ab7a9d], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args);
        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsFieldIntegrator, t_AdamsFieldIntegrator, AdamsFieldIntegrator);
        PyObject *t_AdamsFieldIntegrator::wrap_Object(const AdamsFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsFieldIntegrator), &PY_TYPE_DEF(AdamsFieldIntegrator), module, "AdamsFieldIntegrator", 0);
        }

        void t_AdamsFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "class_", make_descriptor(AdamsFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsFieldIntegrator::wrap_Object(AdamsFieldIntegrator(((t_AdamsFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              JArray< jdouble > a6((jobject) NULL);
              JArray< jdouble > a7((jobject) NULL);
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *CovarianceMatrixProvider::class$ = NULL;
        jmethodID *CovarianceMatrixProvider::mids$ = NULL;
        bool CovarianceMatrixProvider::live$ = false;

        jclass CovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/CovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_9483b2ac438718ce], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3], a0.this$, a1.this$));
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
        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args);

        static PyMethodDef t_CovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_CovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_CovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CovarianceMatrixProvider, t_CovarianceMatrixProvider, CovarianceMatrixProvider);

        void t_CovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(CovarianceMatrixProvider), &PY_TYPE_DEF(CovarianceMatrixProvider), module, "CovarianceMatrixProvider", 0);
        }

        void t_CovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "class_", make_descriptor(CovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "wrapfn_", make_descriptor(t_CovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_CovarianceMatrixProvider::wrap_Object(CovarianceMatrixProvider(((t_CovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }

        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getProcessNoiseMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$BaseConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$BaseConfiguration::mids$ = NULL;
        bool CRDConfiguration$BaseConfiguration::live$ = false;

        jclass CRDConfiguration$BaseConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getConfigurationId_11b109bd155ca898] = env->getMethodID(cls, "getConfigurationId", "()Ljava/lang/String;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_setConfigurationId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setConfigurationId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$BaseConfiguration::CRDConfiguration$BaseConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jboolean CRDConfiguration$BaseConfiguration::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::getConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConfigurationId_11b109bd155ca898]));
        }

        jint CRDConfiguration$BaseConfiguration::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        void CRDConfiguration$BaseConfiguration::setConfigurationId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationId_d0bc48d5b00dc40c], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
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
      namespace ilrs {
        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data);
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$BaseConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$BaseConfiguration, configurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$BaseConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, equals, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, getConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, setConfigurationId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$BaseConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$BaseConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$BaseConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$BaseConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$BaseConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$BaseConfiguration, t_CRDConfiguration$BaseConfiguration, CRDConfiguration$BaseConfiguration);

        void t_CRDConfiguration$BaseConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$BaseConfiguration), &PY_TYPE_DEF(CRDConfiguration$BaseConfiguration), module, "CRDConfiguration$BaseConfiguration", 0);
        }

        void t_CRDConfiguration$BaseConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "class_", make_descriptor(CRDConfiguration$BaseConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$BaseConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$BaseConfiguration::wrap_Object(CRDConfiguration$BaseConfiguration(((t_CRDConfiguration$BaseConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$BaseConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$BaseConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setConfigurationId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationId());
          return j2p(value);
        }
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setConfigurationId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileWriter::mids$ = NULL;
        bool PythonAttitudeEphemerisFileWriter::live$ = false;

        jclass PythonAttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_9b09ecef0da8f461] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileWriter::PythonAttitudeEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonAttitudeEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAttitudeEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAttitudeEphemerisFileWriter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileWriter, t_PythonAttitudeEphemerisFileWriter, PythonAttitudeEphemerisFileWriter);

        void t_PythonAttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileWriter), &PY_TYPE_DEF(PythonAttitudeEphemerisFileWriter), module, "PythonAttitudeEphemerisFileWriter", 1);
        }

        void t_PythonAttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "class_", make_descriptor(PythonAttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V", (void *) t_PythonAttitudeEphemerisFileWriter_write1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileWriter::wrap_Object(PythonAttitudeEphemerisFileWriter(((t_PythonAttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(::org::orekit::files::general::AttitudeEphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data)
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
#include "org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonAbstractCovarianceMatrixProvider::mids$ = NULL;
        bool PythonAbstractCovarianceMatrixProvider::live$ = false;

        jclass PythonAbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractCovarianceMatrixProvider::PythonAbstractCovarianceMatrixProvider(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

        void PythonAbstractCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractCovarianceMatrixProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonAbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonAbstractCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractCovarianceMatrixProvider, t_PythonAbstractCovarianceMatrixProvider, PythonAbstractCovarianceMatrixProvider);

        void t_PythonAbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractCovarianceMatrixProvider), &PY_TYPE_DEF(PythonAbstractCovarianceMatrixProvider), module, "PythonAbstractCovarianceMatrixProvider", 1);
        }

        void t_PythonAbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "class_", make_descriptor(PythonAbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonAbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractCovarianceMatrixProvider::wrap_Object(PythonAbstractCovarianceMatrixProvider(((t_PythonAbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          PythonAbstractCovarianceMatrixProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractCovarianceMatrixProvider(a0));
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

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data)
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
#include "org/orekit/forces/gravity/LenseThirringRelativity.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *LenseThirringRelativity::class$ = NULL;
        jmethodID *LenseThirringRelativity::mids$ = NULL;
        bool LenseThirringRelativity::live$ = false;

        jclass LenseThirringRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/LenseThirringRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d31b3f5aafa248e3] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LenseThirringRelativity::LenseThirringRelativity(jdouble a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d31b3f5aafa248e3, a0, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean LenseThirringRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::List LenseThirringRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args);
        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data);
        static PyGetSetDef t_LenseThirringRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_LenseThirringRelativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LenseThirringRelativity__methods_[] = {
          DECLARE_METHOD(t_LenseThirringRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LenseThirringRelativity)[] = {
          { Py_tp_methods, t_LenseThirringRelativity__methods_ },
          { Py_tp_init, (void *) t_LenseThirringRelativity_init_ },
          { Py_tp_getset, t_LenseThirringRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LenseThirringRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LenseThirringRelativity, t_LenseThirringRelativity, LenseThirringRelativity);

        void t_LenseThirringRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(LenseThirringRelativity), &PY_TYPE_DEF(LenseThirringRelativity), module, "LenseThirringRelativity", 0);
        }

        void t_LenseThirringRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "class_", make_descriptor(LenseThirringRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "wrapfn_", make_descriptor(t_LenseThirringRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LenseThirringRelativity::initializeClass, 1)))
            return NULL;
          return t_LenseThirringRelativity::wrap_Object(LenseThirringRelativity(((t_LenseThirringRelativity *) arg)->object.this$));
        }
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LenseThirringRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          LenseThirringRelativity object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            INT_CALL(object = LenseThirringRelativity(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *YesNoUnknown::class$ = NULL;
          jmethodID *YesNoUnknown::mids$ = NULL;
          bool YesNoUnknown::live$ = false;
          YesNoUnknown *YesNoUnknown::NO = NULL;
          YesNoUnknown *YesNoUnknown::UNKOWN = NULL;
          YesNoUnknown *YesNoUnknown::YES = NULL;

          jclass YesNoUnknown::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/YesNoUnknown");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_60af5296c8132701] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
              mids$[mid_values_757599de2b01fd2a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NO = new YesNoUnknown(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              UNKOWN = new YesNoUnknown(env->getStaticObjectField(cls, "UNKOWN", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              YES = new YesNoUnknown(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          YesNoUnknown YesNoUnknown::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return YesNoUnknown(env->callStaticObjectMethod(cls, mids$[mid_valueOf_60af5296c8132701], a0.this$));
          }

          JArray< YesNoUnknown > YesNoUnknown::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< YesNoUnknown >(env->callStaticObjectMethod(cls, mids$[mid_values_757599de2b01fd2a]));
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
          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args);
          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_YesNoUnknown_values(PyTypeObject *type);
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data);
          static PyGetSetDef t_YesNoUnknown__fields_[] = {
            DECLARE_GET_FIELD(t_YesNoUnknown, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_YesNoUnknown__methods_[] = {
            DECLARE_METHOD(t_YesNoUnknown, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, of_, METH_VARARGS),
            DECLARE_METHOD(t_YesNoUnknown, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(YesNoUnknown)[] = {
            { Py_tp_methods, t_YesNoUnknown__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_YesNoUnknown__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(YesNoUnknown)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(YesNoUnknown, t_YesNoUnknown, YesNoUnknown);
          PyObject *t_YesNoUnknown::wrap_Object(const YesNoUnknown& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_YesNoUnknown::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_YesNoUnknown::install(PyObject *module)
          {
            installType(&PY_TYPE(YesNoUnknown), &PY_TYPE_DEF(YesNoUnknown), module, "YesNoUnknown", 0);
          }

          void t_YesNoUnknown::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "class_", make_descriptor(YesNoUnknown::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "wrapfn_", make_descriptor(t_YesNoUnknown::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "boxfn_", make_descriptor(boxObject));
            env->getClass(YesNoUnknown::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "NO", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::NO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "UNKOWN", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::UNKOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "YES", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::YES)));
          }

          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, YesNoUnknown::initializeClass, 1)))
              return NULL;
            return t_YesNoUnknown::wrap_Object(YesNoUnknown(((t_YesNoUnknown *) arg)->object.this$));
          }
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, YesNoUnknown::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            YesNoUnknown result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::valueOf(a0));
              return t_YesNoUnknown::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_YesNoUnknown_values(PyTypeObject *type)
          {
            JArray< YesNoUnknown > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::values());
            return JArray<jobject>(result.this$).wrap(t_YesNoUnknown::wrap_jobject);
          }
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data)
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
#include "org/orekit/frames/encounter/PythonAbstractEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonAbstractEncounterLOF::class$ = NULL;
        jmethodID *PythonAbstractEncounterLOF::mids$ = NULL;
        bool PythonAbstractEncounterLOF::live$ = false;

        jclass PythonAbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonAbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0cd9ca2f4cf79e0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_d59b144da7c7851f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_2ba248090f65b129] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractEncounterLOF::PythonAbstractEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_0cd9ca2f4cf79e0a, a0.this$)) {}

        void PythonAbstractEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractEncounterLOF::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self);
        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonAbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncounterLOF)[] = {
          { Py_tp_methods, t_PythonAbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractEncounterLOF_init_ },
          { Py_tp_getset, t_PythonAbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(PythonAbstractEncounterLOF, t_PythonAbstractEncounterLOF, PythonAbstractEncounterLOF);

        void t_PythonAbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractEncounterLOF), &PY_TYPE_DEF(PythonAbstractEncounterLOF), module, "PythonAbstractEncounterLOF", 1);
        }

        void t_PythonAbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "class_", make_descriptor(PythonAbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "wrapfn_", make_descriptor(t_PythonAbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAbstractEncounterLOF_getName2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractEncounterLOF_pythonDecRef3 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial4 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractEncounterLOF::wrap_Object(PythonAbstractEncounterLOF(((t_PythonAbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
          PythonAbstractEncounterLOF object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractEncounterLOF(a0));
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

        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParameters::class$ = NULL;
            jmethodID *ODParameters::mids$ = NULL;
            bool ODParameters::live$ = false;

            jclass ODParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getActualOdSpan_dff5885c2c873297] = env->getMethodID(cls, "getActualOdSpan", "()D");
                mids$[mid_getObsAvailable_570ce0828f81a2c1] = env->getMethodID(cls, "getObsAvailable", "()I");
                mids$[mid_getObsUsed_570ce0828f81a2c1] = env->getMethodID(cls, "getObsUsed", "()I");
                mids$[mid_getOdEpoch_85703d13e302437e] = env->getMethodID(cls, "getOdEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getRecommendedOdSpan_dff5885c2c873297] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                mids$[mid_getResidualsAccepted_dff5885c2c873297] = env->getMethodID(cls, "getResidualsAccepted", "()D");
                mids$[mid_getTimeLastObsEnd_85703d13e302437e] = env->getMethodID(cls, "getTimeLastObsEnd", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeLastObsStart_85703d13e302437e] = env->getMethodID(cls, "getTimeLastObsStart", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTracksAvailable_570ce0828f81a2c1] = env->getMethodID(cls, "getTracksAvailable", "()I");
                mids$[mid_getTracksUsed_570ce0828f81a2c1] = env->getMethodID(cls, "getTracksUsed", "()I");
                mids$[mid_getWeightedRMS_dff5885c2c873297] = env->getMethodID(cls, "getWeightedRMS", "()D");
                mids$[mid_setActualOdSpan_17db3a65980d3441] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                mids$[mid_setObsAvailable_99803b0791f320ff] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                mids$[mid_setObsUsed_99803b0791f320ff] = env->getMethodID(cls, "setObsUsed", "(I)V");
                mids$[mid_setOdEpoch_600a2a61652bc473] = env->getMethodID(cls, "setOdEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setRecommendedOdSpan_17db3a65980d3441] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                mids$[mid_setResidualsAccepted_17db3a65980d3441] = env->getMethodID(cls, "setResidualsAccepted", "(D)V");
                mids$[mid_setTimeLastObsEnd_600a2a61652bc473] = env->getMethodID(cls, "setTimeLastObsEnd", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeLastObsStart_600a2a61652bc473] = env->getMethodID(cls, "setTimeLastObsStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTracksAvailable_99803b0791f320ff] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                mids$[mid_setTracksUsed_99803b0791f320ff] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                mids$[mid_setWeightedRMS_17db3a65980d3441] = env->getMethodID(cls, "setWeightedRMS", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ODParameters::ODParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble ODParameters::getActualOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_dff5885c2c873297]);
            }

            jint ODParameters::getObsAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsAvailable_570ce0828f81a2c1]);
            }

            jint ODParameters::getObsUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsUsed_570ce0828f81a2c1]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getOdEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOdEpoch_85703d13e302437e]));
            }

            jdouble ODParameters::getRecommendedOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_dff5885c2c873297]);
            }

            jdouble ODParameters::getResidualsAccepted() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getResidualsAccepted_dff5885c2c873297]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsEnd() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsEnd_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsStart() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsStart_85703d13e302437e]));
            }

            jint ODParameters::getTracksAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksAvailable_570ce0828f81a2c1]);
            }

            jint ODParameters::getTracksUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksUsed_570ce0828f81a2c1]);
            }

            jdouble ODParameters::getWeightedRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getWeightedRMS_dff5885c2c873297]);
            }

            void ODParameters::setActualOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setActualOdSpan_17db3a65980d3441], a0);
            }

            void ODParameters::setObsAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsAvailable_99803b0791f320ff], a0);
            }

            void ODParameters::setObsUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsUsed_99803b0791f320ff], a0);
            }

            void ODParameters::setOdEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdEpoch_600a2a61652bc473], a0.this$);
            }

            void ODParameters::setRecommendedOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_17db3a65980d3441], a0);
            }

            void ODParameters::setResidualsAccepted(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setResidualsAccepted_17db3a65980d3441], a0);
            }

            void ODParameters::setTimeLastObsEnd(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsEnd_600a2a61652bc473], a0.this$);
            }

            void ODParameters::setTimeLastObsStart(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsStart_600a2a61652bc473], a0.this$);
            }

            void ODParameters::setTracksAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksAvailable_99803b0791f320ff], a0);
            }

            void ODParameters::setTracksUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksUsed_99803b0791f320ff], a0);
            }

            void ODParameters::setWeightedRMS(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeightedRMS_17db3a65980d3441], a0);
            }

            void ODParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self);
            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self);
            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args);
            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data);
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data);
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data);
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_ODParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_ODParameters, actualOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, obsAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, obsUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, odEpoch),
              DECLARE_GETSET_FIELD(t_ODParameters, recommendedOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, residualsAccepted),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsEnd),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsStart),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, weightedRMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParameters__methods_[] = {
              DECLARE_METHOD(t_ODParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, getActualOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getOdEpoch, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getRecommendedOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getResidualsAccepted, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsEnd, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsStart, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getWeightedRMS, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, setActualOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setOdEpoch, METH_O),
              DECLARE_METHOD(t_ODParameters, setRecommendedOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setResidualsAccepted, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsEnd, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsStart, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setWeightedRMS, METH_O),
              DECLARE_METHOD(t_ODParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParameters)[] = {
              { Py_tp_methods, t_ODParameters__methods_ },
              { Py_tp_init, (void *) t_ODParameters_init_ },
              { Py_tp_getset, t_ODParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ODParameters, t_ODParameters, ODParameters);

            void t_ODParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParameters), &PY_TYPE_DEF(ODParameters), module, "ODParameters", 0);
            }

            void t_ODParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "class_", make_descriptor(ODParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "wrapfn_", make_descriptor(t_ODParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParameters::initializeClass, 1)))
                return NULL;
              return t_ODParameters::wrap_Object(ODParameters(((t_ODParameters *) arg)->object.this$));
            }
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds)
            {
              ODParameters object((jobject) NULL);

              INT_CALL(object = ODParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setActualOdSpan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setActualOdSpan", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setObsAvailable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsAvailable", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setObsUsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsUsed", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOdEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdEpoch", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRecommendedOdSpan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRecommendedOdSpan", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setResidualsAccepted(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setResidualsAccepted", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsEnd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsEnd", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsStart(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsStart", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTracksAvailable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTracksAvailable", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTracksUsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTracksUsed", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setWeightedRMS(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeightedRMS", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(ODParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setActualOdSpan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "actualOdSpan", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setObsAvailable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsAvailable", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setObsUsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsUsed", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setOdEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odEpoch", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRecommendedOdSpan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "recommendedOdSpan", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setResidualsAccepted(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "residualsAccepted", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsEnd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsEnd", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsStart(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsStart", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTracksAvailable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tracksAvailable", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTracksUsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tracksUsed", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setWeightedRMS(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "weightedRMS", arg);
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
#include "org/orekit/propagation/events/PythonAdaptableInterval.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAdaptableInterval::class$ = NULL;
        jmethodID *PythonAdaptableInterval::mids$ = NULL;
        bool PythonAdaptableInterval::live$ = false;

        jclass PythonAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_432f3d328c15ec82] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdaptableInterval::PythonAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self);
        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdaptableInterval, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdaptableInterval, t_PythonAdaptableInterval, PythonAdaptableInterval);

        void t_PythonAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdaptableInterval), &PY_TYPE_DEF(PythonAdaptableInterval), module, "PythonAdaptableInterval", 1);
        }

        void t_PythonAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "class_", make_descriptor(PythonAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "wrapfn_", make_descriptor(t_PythonAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonAdaptableInterval::wrap_Object(PythonAdaptableInterval(((t_PythonAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data)
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
#include "org/orekit/time/AbstractTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator::class$ = NULL;
      jmethodID *AbstractTimeInterpolator::mids$ = NULL;
      bool AbstractTimeInterpolator::live$ = false;
      jdouble AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_a748072092391184] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/TimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_dff5885c2c873297] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_706b4b6f6d197b4e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_ca327566eddabc11] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_db94401e92756319] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_cfbf80e0f0ffc468] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/TimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_c6a5af2f1a642248] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeInterpolator::AbstractTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      void AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::TimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_a748072092391184], a0.this$, a1);
      }

      jdouble AbstractTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_dff5885c2c873297]);
      }

      jint AbstractTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1]);
      }

      ::java::util::List AbstractTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_2afa36052df4765d]));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_706b4b6f6d197b4e], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_ca327566eddabc11], a0.this$, a1.this$));
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
      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args);
      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator, t_AbstractTimeInterpolator, AbstractTimeInterpolator);
      PyObject *t_AbstractTimeInterpolator::wrap_Object(const AbstractTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator), &PY_TYPE_DEF(AbstractTimeInterpolator), module, "AbstractTimeInterpolator", 0);
      }

      void t_AbstractTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "class_", make_descriptor(AbstractTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator::wrap_Object(AbstractTimeInterpolator(((t_AbstractTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
